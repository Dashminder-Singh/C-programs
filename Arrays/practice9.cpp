/* write a program to calculate the total tax billing amount
	for a list of billing amounts, passed an array of long integers
*/

#include <iostream>
using namespace std;

int caltax(int input1, int input2[])
{
	int sum=0;
	for(int i=0; i<input1; i++)
	{
		if(input2[i]>1000)
		{
			sum=sum + (input2[i]-1000)*10/100;
		}
	}
	return sum;
}

int main()
{
	int n,arr[20];
	cout<<"Enter input1: ";
	cin>>n;
	cout<<"Enter the values: ";
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	cout<<"Total Tax of billing amounts: "<<caltax(n,arr);
	return 0;
}