#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int bin,s=0,i=0;
	cout<<"Enter a Binary number: ";
	cin>>bin;

	while(bin!=0)
	{
		s=s+pow(2,i)*(bin%10);
		bin=bin/10;
		i++;
	}

	cout<<"Decimal equivalent: "<<s;
	return 0;
}