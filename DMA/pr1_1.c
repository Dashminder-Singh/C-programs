// Dynamically create an array of size 2 capable of storing 5 intgers

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;

    p=(int *)malloc(2);  // each block 4 byte

    for(int i=0; i<5; i++)
    {
        printf("Enter the value of %d: ",i+1 );
        //scanf("%d",&p[i]);
        scanf("%d",(p+i));
    }

     for(int i=0; i<5; i++)
    {
        printf("Element %d is: %d\n",i+1,*(p+i));
    }
    return 0;
}