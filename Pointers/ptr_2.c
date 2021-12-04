#include <stdio.h>

void result(int *x,int *y,int *ans)  // call by address(or reference)
{
	*ans=*x+*y;
}

int main()
{
	int a,b,sum;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	result(&a,&b,&sum);
	printf("Sum of %d and %d: %d",a,b,sum);
	return 0;
}