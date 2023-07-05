#include "cetlib/sqlite/column.h"
#include "cetlib/sqlite/create_table.h"
#include "cetlib/sqlite/ConnectionFactory.h"
#include <memory>
#include <string>

using namespace cet::sqlite;

struct no_good_type {
};

int main(){
  ConnectionFactory cf;

  std::string const f{ "a.db" };
  std::unique_ptr<Connection> c{cf.make_connection(f)};
  create_table(*c, "onlyOne", column<no_good_type>{"something"});
  }
