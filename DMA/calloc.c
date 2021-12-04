/*Calloc:- It stands for Continious allocation.It intialize 
		each M/Y block with a default value of 0.

	eg:	p=(int *)calloc(10 * sizeof(int))  allocates contagious space
											in M/Y for 10 blocks(int)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p=(int *)calloc(5,2);


//printf("%d",*p);   // by default value 0

	*(p+0)=34;  // p is pointing first block of address
	*(p+1)=50;	// *p is assin value only first block of address
	
//	*(p+2)=23;
//	*(p+3)=45;
//	*(p+4)=29;
	printf("%d",*p);
/*
	for(int i=0; i<5; i++)
	{
		printf("%d\n",*(p+i));
	}
*/
	return 0;
}