#include <iostream>
using namespace std;

int main() {
  int n, kol=0, temp;
  cin>>n;
  do
  {
    temp = n % 10;
    kol++;
    n /= 10;
  }while(n!=0);
  cout<<kol<<endl;
  return 0;
}