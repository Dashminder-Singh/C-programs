/* Calculate the income tax paid by an 
	employee
*/
#include <iostream>
using namespace std;

int main()
{
	float tax=0, income;
	cout<<"Enter your income: "<<endl;
	cin>>income;

	if(income>=250000 && income<=500000)
	{
		tax=tax +(income-250000)*5/100;   // 5% tax
	}
	if(income>=500000 && income<=1000000)
	{
		tax=tax +(income-500000)*20/100;  //20% taax
	}
	if(income>=1000000)
	{
		tax=tax +(income-1000000)*30/100; // 30% tax
	}
	cout<<"Your net income tax to be paid: "<<tax;
	return 0;
}