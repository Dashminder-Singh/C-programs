// Count the number of positve integers of an array

#include <iostream>
using namespace std;

void count(int arr[])
{
	int count=0;
	for(int i=0; i<8; i++)
	{
		if(arr[i]>0)
		{
			count++;
		}
	}
	cout<<"No. of positve integers: "<<count;
}

int main()
{
	int arr[20];
	cout<<"Enter a positve integers: ";
	for(int i=0; i<8; i++)
	{
		cin>>arr[i];
	}
	count(arr);
	return 0;
}