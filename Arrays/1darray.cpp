#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	for(int i=0; i<8; i++)
	{
		cout<<"Enter the value of "<<i<<" index "<<" ="<<" ";
		cin>>arr[i];
	}
	cout<<endl;

	for(int i=0; i<8; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}