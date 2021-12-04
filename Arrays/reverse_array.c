#include <stdio.h>

void reverse(int arr[],int N)
{
	int temp;
	for(int i=0; i<N/2; i++)
	{
		temp=arr[i];
		arr[i]=arr[N-1-i];
		arr[N-1-i]=temp;
	}
}

int main()
{
	int n;
	printf("Enter how many values: ");
	scanf("%d",&n);

	printf("Enter the %d values: ",n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	reverse(arr,n);
	printf("\n");
	printf("Reverse is:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}