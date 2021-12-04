#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p=(int *)malloc(4);

	for(int i=0; i<5; i++)
	{
		printf("Enter the value of %d element: ",i);
		scanf("%d",&*(p+i));
	}
	for (int i = 0; i<5; ++i)
	{
		printf("The value of %d = %d\n",i,*(p+i) );
	}
	return 0;
}