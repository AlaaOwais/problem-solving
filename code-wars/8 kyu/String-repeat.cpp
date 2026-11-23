#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string repeated = "";
    for(int i = 1 ; i<= repeat ; i++)
      {
      repeated += str;
    }
  
  return repeated;
}