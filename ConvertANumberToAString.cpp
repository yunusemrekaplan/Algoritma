#include <sstream>

std::string number_to_string(int num) {
  std::string a;
  std::stringstream ss;
  ss << num;
  ss >> a;
  return a;
}