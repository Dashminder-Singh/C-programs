#include <stdio.h>

int main()
{
	int n1, n2, p,q,sum=0;

	printf("Enter a two number to count the number of carry: ");
	scanf("%d%d",&n1,&n2);

	int count=0, carry=0;
	while(n1!=0 && n2!=0)
	{
		p=n1%10;
		q=n2%10;
		sum=p+q+carry;
		if(sum>9)
		{
			carry=1;
			count++;
		}
		else{
			carry=0;
		}
		n1=n1/10;
		n2=n2/10;
	}
	printf("Number of carry is: %d",count);
	return 0;
}

/*
	input:	436
			398
	output: 2
*/