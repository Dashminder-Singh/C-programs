#include <stdio.h>
void pattern(int no)
{
	if(no==1)     // base condition
	{
		printf("*\n");
		return;
	}
	pattern(no-1);
	for(int i=0; i<(2*no-1); i++)
	{
		printf("*");
	}
	printf("\n");
}

void pattern(int n);
int main()
{
	int n;
	printf("Enter the value of (n): ");
	scanf("%d",&n);
	pattern(n);
	return 0;
}