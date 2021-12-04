#include <iostream>
using namespace std;

int main()
{
	int a,b,n,i;
	cout<<"Enter the Two No.s: ";
	cin>>a>>b;

	for(n=a+1; n<b; n++)
	{
		for(i=2; i<n; i++)
		{
			if(n%i==0)
				break;
		}

		if(i==n)
		{
			cout<<n<<" ";
		}
	}
	return 0;
}