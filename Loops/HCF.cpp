#include <iostream>
using namespace std;

int main()
{
	int a,b,h;
	cout<<"Enter two number: ";
	cin>>a>>b;
	//h=a<b?a:b;  a is smaller than b

	for(h=a<b?a:b; h>=1; h--)   // loops starts from min value to 1
	{
		if(a%h==0 && b%h==0)
			break;
	}
	cout<<"The HCF is: "<<h;
	return 0;
}