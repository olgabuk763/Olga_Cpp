#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

/*int my_strlen(const char* s) {
  int result = 0;
  while (*s != '\0') {
    s++;
    result++;
  }

  return result;
}*/

int main()
{
  string str;
  cin>>str;
  //int n = strlen(str);
  int c = str.size();
  for(int i=0; i<c; ++i)
  {
  	str[i]=toupper(str[i]);
  }
  cout<<str;
  return 0;
}