#include <iostream>
using namespace std;

int main()
{
	int n,x,r,s=0;
	cout<<"Enter a Number: ";
	cin>>n;
	x=n;

	while(x!=0)
	{
		r=x%10;
		s=s+(r*r*r);
		x=x/10;
	}

	if(s==n)
		cout<<n<<" Is a Armstrong No."<<endl;
	else
		cout<<n<<" Not a Armstrong No."<<endl;

	return 0;
}