#include <stdio.h>

int main()
{
	/*int N;
	printf("Enter how many integers you want: ");
	scanf("%d",&N); */

	int arr[50],sum=0;
	int *p;
	//p=arr;
	p=&arr[0];
	printf("Enter 5 elements:\n");

	for(int i=0; i<5; i++)
	{
		//scanf("%d",&arr[i]);
		scanf("%d",(p+i));
	}

	for(int i=0; i<5; i++)
	{
		sum=sum + *(p+i);
	}
	
	printf("Sum of 5 elements is: %d",sum);

/*
	int arr[50],sum=0;
	int *p;
	printf("Enter 5 elements:\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	p=arr;
	for(int i=0; i<5; i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("Sum of 5 elements is: %d",sum);*/
	return 0;
}