#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p=(int *)malloc(4);

	for(int i=0; i<10; i++)
	{
		*(p+i)=5 * (i+1);
		printf("5 X %d= %d\n",i+1,*(p+i));
	}
	return 0;
}