#include <iostream>
using namespace std;

int main()
{
	int a,b,ans=1;
	cout<<"Enter a number and power: ";
	cin>>a>>b;

	for(int i=1; i<=b; i++)
	{
		ans=ans*a;
	}
	cout<<"Result is: "<<ans;
	return 0;
}