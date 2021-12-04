#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	if(n &1) // bitwise AND
	{
		printf("%d is Odd number",n);
	}
	else
	{
		printf("%d is Even number",n);
	}
	return 0;
}