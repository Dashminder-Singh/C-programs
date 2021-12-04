#include <stdio.h>
#include <math.h>

int isperfect_sq(int x)
{
	int s;
	s=sqrt(x);
	return s*s==x;
}

int isfibonacci(int n)
{
	return isperfect_sq(5*n*n + 4) || isperfect_sq(5*n*n - 4);
}
int main()
{
	int n;
	scanf("%d",&n);
	if(isfibonacci(n))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}