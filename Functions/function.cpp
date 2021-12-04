#include <iostream>
using namespace std;

void pattern()
{
	int n;
	cout<<"Enter the No. of Row: ";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	pattern();
	pattern();
	pattern();

	return 0;
}