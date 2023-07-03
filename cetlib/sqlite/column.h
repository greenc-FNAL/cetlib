#ifndef cetlib_sqlite_column_h
#define cetlib_sqlite_column_h

// ===================================================================
// column<T, Constraints...>
//
// SQLite tables are composed of columns that are specified in SQLite
// as (e.g):
//
//  CREATE TABLE workers(FirstName TEXT, LastName TEXT);
//
// where the fields in parentheses denote two columns with the names
// 'FirstName' and 'LastName', both of which are of the type 'TEXT'.
//
// The column template allows a user to specify a column using native
// C++ types.  For example, the above SQLite statement can be achieved
// and executed in C++ using the create_table command:
//
//   cet::sqlite::create_table(db,
//                             "workers",
//                             column<string>{"FirstName"},
//                             column<string>{"LastName"});
//
// Column constraints are also allowed (e.g.):
//
//   column<int, primary_key, autoincrement>{"id"}
//
// See the notes in cetlib/sqlite/detail/column_constraint.h.
// ===================================================================

#include "cetlib/sqlite/detail/column_constraint.h"

#include <array>
#include <string>
#include <tuple>
#include <utility>

#include "cetlib_except/cxx20_macros.h"
#if CET_CONCEPTS_AVAILABLE
#include <concepts>
#endif

namespace cet::sqlite {
  template <size_t N>
  using name_array = std::array<std::string, N>;

  class column_base {
  public:
    column_base(std::string const& n) : name_{n} {}
    auto const&
    name() const
    {
      return name_;
    }

  private:
    std::string name_;
  };

  // column<T> is a containing struct that knows its C++ type (T)
  // and the sqlite translation (sqlite_type()).  There is no
  // implementation for the general case; the template must be
  // specialized for each supported type.
  template <typename T, typename... Constraints>
  struct column;

  // IMPROVEMENT: The specializations can be improved by some
  // template metaprogramming and using the std::is_arithmetic and
  // std::is_floating_point type traits.
  template <typename T, typename... Constraints>
  struct column : column_base {
    using column_base::column_base;
    using type = T;

    std::string
    sqlite_type() const
      requires std::integral<T>
    {
      return " integer";
    }
    std::string
    sqlite_type() const
      requires std::floating_point<T>
    {
      return " numeric";
    }
    std::string
    sqlite_type() const
      requires(!std::is_arithmetic<T>::value &&
               std::convertible_to<T, std::string>)
    {
      return " text";
    }
  };
  template <typename T, typename... Constraints>
  struct permissive_column : column<T, Constraints...> {
    using column<T, Constraints...>::column;
    using element_type = T;
  };

  template <typename T, typename... Constraints>
  struct permissive_column<column<T, Constraints...>>
    : permissive_column<T, Constraints...> {
    using permissive_column<T, Constraints...>::permissive_column;
  };

} // cet::sqlite

#endif /* cetlib_sqlite_column_h */

// Local Variables:
// mode: c++
// End:
