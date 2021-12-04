#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1, sum=0;
	while(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
	}

	if(sum==n)
		printf("%d is perfect number",n);  // 6 is perfect number
	else
		printf("%d is not perfect number",n);
	return 0;
}