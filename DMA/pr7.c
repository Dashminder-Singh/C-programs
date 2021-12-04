#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Enter a table number: ");
	scanf("%d",&n);

	int *p;
	p=(int *)malloc(4);

	for(int i=0; i<10; i++)
	{
		*(p+i)= n * (i+1);
		printf("%d X %d= %d\n",n,i+1,*(p+i));
	}
	return 0;
}