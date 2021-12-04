#include <stdio.h>
#include <stdlib.h>

int reverse(int n)
{
	int r, y=0;
	while(n!=0)
	{
		r=n%10;
		y=y*10+r;
		n=n/10;
	}
	return y;
}

void get_sum(int n)
{
	n=reverse(n);

	int sum_even=0, sum_odd=0;
	int c=1;
	while(n!=0)
	{
		if(c%2==0)
		{
			sum_even=sum_even+ n%10;
		}
		else
		{
			sum_odd=sum_odd+ n%10;
		}
		c++;
		n=n/10;
	}

	printf("Sum of digits even: %d\n",sum_even);
	printf("Sum of digits odd: %d\n",sum_odd);
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	get_sum(n);
	return 0;
}


/*
	5 4 8 7 3
	3 7 8 4 5 -> reverse
	
	initially c=1 se start hogi
	c=1,2,.. c++
	even=4+7= 11

	else

	odd=5+8+3= 16
*/