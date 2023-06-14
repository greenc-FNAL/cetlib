#ifndef cetlib_hard_cast_h
#define cetlib_hard_cast_h

#include "cetlib_except/cxx20_macros.h"
#if CET_CONCEPTS_AVAILABLE
#include <concepts>
#endif
#include <cstring>

#if CET_CONCEPTS_AVAILABLE
namespace detail {
  template <typename T>
  concept cet_pointer = std::is_pointer_v<T>;
}
#endif

namespace cet {
  // For use when only a C++ {dynamic,static,reinterpret}_cast is not
  // sufficient to the task. The only case of this known currently is
  // when using dlopen, dlsym, etc. and a void * must be cast to a
  // function pointer.
  #if CET_CONCEPTS_AVAILABLE
  template <detail::cet_pointer PTR_T>
  #else
  template <typename PTR_T>
  #endif
  PTR_T hard_cast(void* src);

  #if CET_CONCEPTS_AVAILABLE
  template <detail::cet_pointer PTR_T>
  #else
  template <typename PTR_T>
  #endif
  void hard_cast(void* src, PTR_T& dest);
}

#if CET_CONCEPTS_AVAILABLE
template <detail::cet_pointer PTR_T>
#else
template <typename PTR_T>
#endif
inline PTR_T
cet::hard_cast(void* src)
{
  PTR_T dest;
  hard_cast(src, dest);
  return dest;
}

#if CET_CONCEPTS_AVAILABLE
template <detail::cet_pointer PTR_T>
#else
template <typename PTR_T>
#endif
inline void
cet::hard_cast(void* src, PTR_T& dest)
{
  memcpy(&dest, &src, sizeof(PTR_T));
}
#endif /* cetlib_hard_cast_h */

// Local Variables:
// mode: c++
// End:
