#define BOOST_TEST_MODULE (exempt_ptr test)

#include "boost/test/unit_test.hpp"
#include "cetlib/exempt_ptr.h"
#include <cstdlib>

namespace cet {
  template <typename T>
  std::ostream&
  boost_test_print_type(std::ostream& os, exempt_ptr<T> p)
  {
    return os << p.get();
  }
}

using cet::exempt_ptr;
using cet::make_exempt_ptr;

BOOST_AUTO_TEST_SUITE(exempt_ptr_test)

BOOST_AUTO_TEST_CASE(null_ptr_test)
{
  exempt_ptr<int> p;
  BOOST_TEST(!p);
  BOOST_TEST(p == nullptr);
  BOOST_TEST(nullptr == p);
  BOOST_TEST((p == 0));
  BOOST_TEST((0 == p));
}

BOOST_AUTO_TEST_CASE(constructibility)
{ // non-const => const
  static_assert(std::is_constructible_v<exempt_ptr<int const>, int*>);
  // const => non-const (not constructible)
  static_assert(not std::is_constructible_v<exempt_ptr<int>, int const*>);
}

BOOST_AUTO_TEST_CASE(nondeletable_ptr)
{
  exempt_ptr<double const> p = make_exempt_ptr(new double(42.0));
  BOOST_TEST(p != nullptr);
  BOOST_TEST(nullptr != p);
  BOOST_TEST(*p == 42.0);
}

BOOST_AUTO_TEST_CASE(ptr_with_value)
{
  exempt_ptr<int> p(new int(16));
  BOOST_TEST(p != nullptr);
  BOOST_TEST(nullptr != p);
  BOOST_TEST(*p == 16);

  exempt_ptr<int> q(p);
  BOOST_TEST(p == q);
  BOOST_TEST(*p == *q);

  p.reset(new int(0));
}

BOOST_AUTO_TEST_SUITE_END()
