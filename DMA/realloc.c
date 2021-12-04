/*Realloc:-It is used to allocate M/Y of new size, using 
			the previous pointer and size.
			eg: q=(int *)realloc(p, new size);
			q=(int *)realloc(p, 3* sizeof(int));
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;

	p=(int *)malloc(4);
	*p=10;
	printf("%d\n",*p);

	float *q;
	q=(float *)realloc(p,8);
	*q=3.45;
	printf("%.2f",*q);
	return 0;
}