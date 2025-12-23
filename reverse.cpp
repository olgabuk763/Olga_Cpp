#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	 int n, kol=0, temp;
  cin>>n;
  do
  {
    temp = n % 10;
    cout<<temp;
    n /= 10;
  }while(n!=0);
  return 0;
}