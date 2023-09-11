#ifndef cetlib_split_search_path_h
#define cetlib_split_search_path_h

#include <concepts>
#include <ranges>
#include <string>
#include <vector>

namespace cet {
  std::vector<std::string> split_search_path(std::string const& search_path);

  namespace tags {
    static constexpr struct append_t {
    } append;
  }

  namespace detail {
    template <typename T>
    concept can_emplace_string = requires(T container) {
                                   {
                                     container.emplace_back(std::string{})
                                   };
                                 };
  }

  template <detail::can_emplace_string T>
  void
  split_search_path(std::string const& search_path, T& results, tags::append_t)
  {
    for (auto&& item : search_path | std::views::split(':')) {
      results.emplace_back(item.begin(), item.end());
    }
  }

  template <detail::can_emplace_string T>
  void
  split_search_path(std::string const& search_path, T& results)
  {
    results.clear();
    split_search_path(search_path, results, tags::append);
  }
}

// ======================================================================

#endif /* cetlib_split_search_path_h */

// Local Variables:
// mode: c++
// End:
