#include <stdio.h>
#include <stdlib.h>

int main()
{
	  int *p1;
    int *p2;
    /*
     Sizeof operator in C
    printf("The size of int on my pc is %d\n", sizeof(int));  // 4
    printf("The size of float on my pc is %d\n", sizeof(float)); // 4
    printf("The size of char on my pc is %d\n", sizeof(char)); // 1
    printf("The size of double on my pc is %d\n",sizeof(double)); //8
    printf("The size of long long int is %d\n",sizeof(long long));// 8
    */

    p1=(int *)malloc(20);
    for(int i=0; i<20; i++)
    {
    	p2=(int *)malloc(400);
    	printf("Enter the value of %d: ",i);
    	scanf("%d",&p1[i]);
    	free(p2);
    }

    for (int i = 0; i<5; ++i)
    {
    	printf("The value of %d is: %d\n",i,p1[i]);
    }
	return 0;
}