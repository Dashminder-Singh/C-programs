// Dynamically create an array of size 2 capable of storing 5 intgers

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;

    p=(int *)malloc(2* sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("Enter the value of %d:\n",i );
        scanf("%d",&p[i]);
    }
/*
    for(int i=0; i<5; i++)
    {
        printf(" the value of %d element is:%d\n",i,p[i]);
    }*/

     for(int i=0; i<5; i++)
    {
        printf(" the value of %d element is:%d\n",i,*(p+i));
    }
    return 0;
}