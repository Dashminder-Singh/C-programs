#include <stdio.h>

void rotate_right(int A[], int N, int k)
{
	while(k!=0)
	{
		int temp=A[N-1];
		for(int i=N-1; i>=0; i--)
		{
			A[i]=A[i-1];
		}
		A[0]=temp;
		k--;
	}
}

void rotate_left(int A[], int N, int k)
{
	while(k!=0)
	{
		int temp=A[0];
		for(int i=0; i<=N-2; i++)
		{
			A[i]=A[i+1];
		}
		A[N-1]=temp;
		k--;
	}
}


void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[]={10, 20, 30, 40, 50};
	int n=sizeof(arr)/sizeof(int);
	int l,r;
	
	display(arr,n);

	printf("Enter rotate_right no: ");
	scanf("%d",&r);
	rotate_right(arr,n,r);
	display(arr,n);

	printf("Enter rotate_left no: ");
	scanf("%d",&l);
	rotate_left(arr,n,l);
	display(arr,n);

	return 0;
}