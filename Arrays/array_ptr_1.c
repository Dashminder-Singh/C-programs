#include <stdio.h>

int main()
{
	int arr[5];
	int *p;
	p=&arr[0];

	printf("Enter values: ");
	for(int i=0; i<5; i++)
	{
		//scanf("%d",&arr[i]);
		scanf("%d",(p+i));
	}

	for(int i=0; i<5; i++)
	{
		//printf("%d ",arr[i]);
		printf("Value %d %d\n",i+1,*(p+i));
	}

	return 0;
}