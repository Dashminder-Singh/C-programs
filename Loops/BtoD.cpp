#include <iostream>
//#include <math.h>
using namespace std;

int main()
{
	int bin,s=0,i=1,r,n;
	cout<<"Enter a Binary number: ";
	cin>>bin;
	n=bin;				//n is a temp variable and i is base value

	while(n!=0)
	{
		r=n%10;
		s=s+r*i;
		n=n/10;
		i=i*2;
	}
	cout<<"Decimal equivalent: "<<s;
	return 0;
}