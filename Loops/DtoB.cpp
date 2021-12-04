#include <iostream>
using namespace std;

int main()
{
	int dec,s=0,i=1,r,n;
	cout<<"Enter a Decimal No. ";
	cin>>dec;
	n=dec;				//n is temp variable and i is base value

	while(n!=0)
	{
		r=n%2;
		s=s+r*i;
		n=n/2;
		i=i*10;	
	}

	cout<<"Binary equivalent: "<<s;
	return 0;
}