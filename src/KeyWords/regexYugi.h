#include <iostream>
#include <string>
#include <regex>

using namespace std;
int main ()
{
    string s = "I am looking for GeeksForGeek \n";
     
    // matches words beginning by "Geek"
    regex r("\\w*(loo)\\w*");
     
    // regex_replace() for replacing the match with 'geek' 
    cout << std::regex_replace(s, r, "geek");
  return 0;
}
