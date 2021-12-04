#include <stdio.h>

void append(int a[], int size, int index, int data)
{
	if(index == size-1)        // This is for append 
		printf("Overflow\n");
	else{
		index+=1;
		a[index]=data;
	}
}

void display(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}

int main()
{
	int n, data;
	printf("Enter size of an array: ");
	scanf("%d",&n);

	int arr[n], lastindex;

	lastindex=-1;

	printf("\nEnter values: ");  // This is not for insert a values 
	for(int i=0; i<n-1; i++)
	{
		scanf("%d",&arr[i]);
		lastindex++;
	}

	for(int i=0; i<n-1; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n\nlastindex: %d",lastindex);

	printf("\n\nEnter data: ");
	scanf("%d",&data);

	append(arr,n,lastindex,data);
	lastindex+=1;
	display(arr,n);

	printf("\n\nlastindex: %d",lastindex);

	printf("\n\nEnter data: ");
	scanf("%d",&data);
	append(arr,n,lastindex,data);

	return 0;
}