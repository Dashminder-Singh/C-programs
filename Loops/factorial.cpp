#include <iostream>
using namespace std;

int main()
{
	int n,ans=1;
	cout<<"Enter No. to find Factorial: ";
	cin>>n;
	for(int i=n; i>=1; i--)     /*for(int i=1; i<=n; i++)*/
	{
		ans=ans*i;
		//ans*=i;
	}
	cout<<n<<"! = "<<ans<<endl;
	return 0;
}