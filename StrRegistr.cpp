#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string str;
  getline(cin, str);
  //int n = strlen(str);
  int c = str.size();
  for(int i=0; i<c; ++i)
  {
  	  if(isupper(str[i]))
  	  {
  	  	str[i]=tolower(str[i]);
  	  }
  	  else
  	  {
  	  	str[i]=toupper(str[i]);
  	  }
  }
  cout<<str;
  return 0;
}