#include "cetlib/registry_via_id.h"

using cet::registry_via_id;

struct thing{
  int i;
  thing(int i = 0) : i(i) {}
};

int main(){
  using reg = registry_via_id<char, thing>;
  reg::put(2);
}
