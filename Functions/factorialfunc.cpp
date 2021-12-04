#include <iostream>
using namespace std;

int factorial(int no)
{
	int ans=1;
	for(int i=no; i>=1; i--)
	{
		ans=ans*i;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter a No.: ";
	cin>>n;
	cout<<"Factorial of"<<n<<"! = "<<factorial(n)<<endl;
	return 0;
}