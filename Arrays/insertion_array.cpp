#include <iostream>
using namespace std;

void display(int arr[],int N)
{
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertion(int arr[],int N, int index, int item)
{
	if(index>=N+1)
	{
		cout<<"insertion not possible";
	}
	else
	{
		for(int i=N-1; i>=index; i--)
		{
			arr[i+1]=arr[i];
		}
		arr[index]=item;
	}
}

int main()
{
	int arr[50]={7, 12, 32, 56, 98};
	int size=5;
	int index=4, element=45;
	display(arr,size);
	insertion(arr, size, index, element);
	size=size+1;
	display(arr,size);

	return 0;
}