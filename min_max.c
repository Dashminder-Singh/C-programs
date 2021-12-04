#include <stdio.h>

void min_max(int A[], int n)
{
	int min, max;
	max=0;
	min=A[0];

	for(int i=0; i<n; i++)
	{
		if(A[i]> max)
		{
			
			max=A[i];
		}
		if(A[i]<min)
		{
			min=A[i];
		}
	}
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
}

int main()
{
	int arr[]={10,9,17,5,14,22};

	min_max(arr,6);
	
	return 0;
}