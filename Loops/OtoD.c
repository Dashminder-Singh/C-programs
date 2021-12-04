#include <stdio.h>

int main()
{
	int n, x, r, decimal=0, i=1;
	printf("Enter octal number: ");
	scanf("%d",&n);

	x=n;
	while(x!=0)
	{
		r=x%10;
		decimal=decimal + i * r;
		x=x/10;
		i=i* 8;
	}

	printf("Decimal is %d\n",decimal);

	return 0;
}