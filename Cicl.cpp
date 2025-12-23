#include <iostream>
using namespace std;

int main() {
  int n, sum=0;
  cin>>n;
  do{
    if(n>0)
    {
    	sum += n;
    }
    cin>>n;
  }while(n>=0);
  cout<<sum<<endl;
  return 0;
}