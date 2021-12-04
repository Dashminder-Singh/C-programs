#include <stdio.h>

int main()
{
	int r,c, A[10][10], B[10][10], C[10][10];
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d",&r,&c);

	printf("Enter the values of %d rows & %d columns: ",r,c);
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	printf("Enter the values of %d rows & %d columns: ",r,c);
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}

	printf("Subtraction of Two matric:\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			C[i][j]=A[i][j]-B[i][j];
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}