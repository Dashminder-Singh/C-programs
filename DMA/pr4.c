#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p=(int*) malloc(sizeof(int));

	for (int i=0; i<10; i++)
	{
		p[i]=7 * (i+1);
		//*(p+i)= 7 *(i+1);
		printf("The value of 7 X %d = %d \n", i+1, p[i]);
	}

	printf("\nAfter reallocating....\n\n");

	int *q;
	q=(int*) realloc(p, sizeof(int));

	for (int i=0; i<15; i++)
	{
		q[i]=5 *(i+1);
		printf("The value of 5 X %d = %d \n", i+1, q[i]);
	}
	return 0;
}