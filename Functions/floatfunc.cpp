#include <iostream>
using namespace std;

float divison(float dividend,float divisor)
{
	float ans=dividend/divisor;
	return ans;
}
int main()
{
	float dividend,divisor;
	cout<<"Enter Dividend: ";
	cin>>dividend;
	cout<<"Enter Divisor: ";
	cin>>divisor;

	cout<<dividend<<"/"<<divisor<<" = "<<divison(dividend,divisor)<<endl;

	return 0;
}