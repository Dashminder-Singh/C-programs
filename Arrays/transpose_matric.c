#include <stdio.h>

int main()
{
	int A[2][3], transpose[2][3];

	printf("Enter the values of matric: ");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			transpose[j][i]=A[i][j]; //interchange rows & columns
		}
	}

	printf("Transpose matric: \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}