#include <stdio.h>

int sum(int,int);   //prototype declaration
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int x,y,s;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	s=sum(x,y);
	//printf("The Sum of two number is: %d\n",s);
	printf("The Sum of %d and %d = %d",x,y,s);
	return 0;
}