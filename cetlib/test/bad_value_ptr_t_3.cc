#include "cetlib/value_ptr.h"

#include <cstdint>

struct simple_base{
  std::int32_t n;
  std::uint16_t s;
  std::uint8_t c; 
};

struct simple_sub : simple_base{
  std::int32_t m;
  simple_sub* clone(){
    return *this;
  }
};


int main(){
  simple_sub s1;
  cet::value_ptr<simple_base, cet::default_copy<simple_base> > p(&s1);
  //static_assert(cet::_::WouldSlice<simple_base, cet::default_clone<simple_base>, simple_base>);
  //static_assert(cet::_::PolymorphicWithClone<simple_base>);
}
