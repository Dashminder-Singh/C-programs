#include <stdio.h>

int main()
{
	int bin, o=0, i=1, r;
	printf("Enter a binary number: ");
	scanf("%d",&bin);

	while(bin!=0)
	{
		r=bin%10;
		o=o+r*i;
		bin=bin/10;
		i=i*2;
	}

	printf("Octal is %d\n",o);
	return 0;
}