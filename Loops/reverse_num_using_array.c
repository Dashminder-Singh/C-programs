#include <stdio.h>

int main()
{
	int N;
	printf("Enter how many integrs you want: ");
	scanf("%d",&N);
	int arr[N];
	printf("Enter %d numbers: ",N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Reverse is: ");
	for(int i=N-1; i>=0; i--)
	{
		printf(" %d",arr[i]);
	}

	return 0;
}