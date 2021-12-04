#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a No.: ";
	cin>>n;


	for(int i=2; i>1; i++)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
	}
	return 0;
	
}