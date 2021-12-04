#include <iostream>
using namespace std;

int min(int arr[],int N)
{
	int min;
	min=arr[0];  // assuming first no. is minimum

	for(int i=1; i<N; i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int main()
{
	int arr[]={35,48,25,56,11,20,32};
	cout<<"Minimum value of the array is: "<<min(arr,7);
	return 0;
}