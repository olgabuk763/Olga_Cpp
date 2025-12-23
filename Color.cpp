#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin>>x>>y;
	if((x>2 && x<16) && (y>1 && y<9))
	{
		if((x>4 && x<7) && (y>3 && y<7))
		{
			cout<<"красный"<<endl;
		}
		else if((x>10 && x<14) && (y>3 && y<7))
		{
			cout<<"зеленый"<<endl;
		}
		else
		{
			cout<<"желтый"<<endl;
		}
	}
	else
	{
		cout<<"белый"<<endl;
	}
	return 0;
}