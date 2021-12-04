/* Malloc():- It stands for M/Y allocation.It takes the no. of bytes
			 to be allocated as an input & return a pointer of type-void.

		eg:	p=(int *)malloc(2 *sizeof(int));  space for 2 ints
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a;  // sma- static M/Y loc
	float *p;

	//p=malloc(2);   // malloc has void-tye fn 

	p=(float *)malloc(4);
	//printf("%f",*p);   // it will take the garbage value by default

	*p=4.5;    // it assign the value into the block
	printf("%.1f",*p);
	return 0;
}