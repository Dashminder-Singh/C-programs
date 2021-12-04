#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"Enter the values: ";
	cin>>a>>b>>c>>d;

	if(a>b && a>c && a>d)
	{
		cout<<a<<" is Greater";
	}
	else if(b>c && b>d)
	{
		cout<<b<<" is Greater";
	}
	else if(c>d)
	{
		cout<<c<<" is Greater";
	}
	else
	{
		cout<<d<<" is Greater";
	}
	return 0;
}