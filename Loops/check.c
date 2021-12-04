#include <stdio.h>

int divisible(int n)
{
	int sum=0, r,x;
	x=n;
	while(x!=0)
	{
		r=x%10;
		sum=sum+r;
		x=x/10;
	}
	if(n%sum==0)
	{
		return n/sum;
	}
	else{
		return 0;
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int ans=divisible(n);
	printf("%d ",ans);
	return 0;
}