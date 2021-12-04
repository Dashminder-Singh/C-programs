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

void deletion(int arr[],int N, int index)
{
	if(index >=N+1)
	{
		cout<<"deletion not possible";
	}
	else
	{
		for(int i=index; i<N-1; i++) // delete index
		{
			arr[i]=arr[i+1];
		}  
	}	
}

int main()
{
	int arr[50]={7, 8, 12, 27, 88};
	int size=5;
	int index=1;
	display(arr,size);
	deletion(arr, size, index);
	size=size-1;
	display(arr,size);

	return 0;
}