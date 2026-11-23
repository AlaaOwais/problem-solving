#include <string>

std::string no_space(const std::string& x)
{
  std::string res = "";
  for(int i = 0 ; i < x.size() ; i++)
    {
    if(x[i] == ' ')
      continue;
    res+= x[i];
  }
   return res;
}