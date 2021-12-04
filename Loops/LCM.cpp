#include <iostream>
using namespace std;

int main()
{
	int a,b,l;
	cout<<"Enter two number: ";
	cin>>a>>b;
	//l=a>b?a:b;
	//for(l=1; l<=a*b; l++)

	//for(l=a>b?a:b; l<=a*b; l++) 	// l starts with max value of a & b
	for(l=a>b?a:b; l<=a*b; l=l+(a>b?a:b)) // l+l=12 it start with 12
	{
		if(l%a==0 && l%b==0)
			break;
	}
	cout<<"The LCM is: "<<l;
	return 0;
}