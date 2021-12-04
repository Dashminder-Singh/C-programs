#include <stdio.h>

int main()
{
	int n, x, r, o=0, i=1;
	printf("Enter a number: ");
	scanf("%d",&n);

	x=n;
	while(x!=0)
	{
		r=x%8;
		o=o+i*r;
		x=x/8;
		i=i*10;
	}
	printf("Octal is %d\n", o);
	return 0;
}