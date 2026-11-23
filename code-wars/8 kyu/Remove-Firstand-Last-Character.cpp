#include <string>
using namespace std;

string sliceString (string str )
{
    string result= "";
  for(int i =1 ; i < str.size()-1 ; i++)
    {
    result += str[i];
  }
    return result ; 
}


// another solution 

// #include <string>

// using namespace std; 

// string sliceString (string str )
// {
//   return str.substr(1 , str.size()-2) ; 
// }