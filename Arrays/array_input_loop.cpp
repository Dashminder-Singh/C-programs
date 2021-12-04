#include <iostream>
using namespace std;

int main()
{
	int arr[5];

	for (int i=0; i<5; i++)
	{
		cout<<"Enter the marks of students "<<i+1<<" = "<<" ";
		cin>>arr[i];
	}

	cout<<endl;
	for (int i=0; i<5; i++)
	{
		cout<<"The marks of students "<<i+1<<" = "<<arr[i]<<endl;
	}
	
	return 0;
}