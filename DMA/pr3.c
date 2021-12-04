/* Create an array dyamically capable of storing 5 intgers.
	Now use realloc so that it can now store 10 integers.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int *p;
	 int *q;
    p=(int *)malloc(2* sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("Enter the value of %d:\n",i );
        scanf("%d",&p[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf(" the value of %d element is:%d\n",i,p[i]);
    }

    q=(int *)realloc(p, 4* sizeof(int));

	for(int i=0; i<10; i++)
    {
        printf("Enter the value of %d:\n",i );
        scanf("%d",&p[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf(" the value of %d element is:%d\n",i,p[i]);
    }
	return 0;
}