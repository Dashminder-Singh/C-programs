#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	cout<<"Enter the 3rd value: ";
	cin>>c;

	system("pause");

	if(a>b && a>c)
	{
		cout<<a<<" is Greater value"<<endl;
	}
	else if(b>c)
	{
		cout<<b<<" is Greater value"<<endl;
	}
	else
	{
		cout<<c<<" is Greater value"<<endl;
	}


	if(a<b && a<c)
	{
		cout<<a<<" is Smaller value"<<endl;
	}
	else if(b<c)
	{
		cout<<b<<" is Smaller value"<<endl;
	}
	else
	{
		cout<<c<<" is Smaller value"<<endl;
	}
	return 0;
}