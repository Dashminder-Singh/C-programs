#include <iostream>
using namespace std;

int max(int arr[],int N)
{
	int max=0;

	//max=arr[0];     
	for(int i=0; i<N; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}

int main()
{
	int arr[]={15,87,25,35,40,45};
	//int size=sizeof(arr)/sizeof(int);
	cout<<"Maximum value of the array: "<<max(arr,6);

	return 0;
}