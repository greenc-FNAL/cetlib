#include "cetlib/split_search_path.h"

#include <ranges>

std::vector<std::string>
cet::split_search_path(std::string const& search_path)
{
  std::vector<std::string> results;
  split_search_path(search_path, results, tags::append);
  return results;
}
