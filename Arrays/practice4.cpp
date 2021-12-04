// Reverse of an array, using function

#include <iostream>
using namespace std;

void reverse(int arr[],int N)
{
	int temp;
	for(int i=0; i<N/2; i++)
	{
		temp=arr[i];
		arr[i]=arr[N-i-1];
		arr[N-i-1]=temp;
	}
}
int main()
{
	int arr[]={1,5,6,9,11,14,19};
	reverse(arr,7);

	for(int i=0; i<7; i++)
	{
		cout<<" "<<arr[i];
	}
	return 0;
}