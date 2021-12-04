#include <stdio.h>

void sum1(void);
void sum2(int n);
int sum3(void);
int sum4(int n);

int main()
{
	//sum1();
	//sum2(3);

	/*int s=sum3();
	printf("Sum is: %d",s);*/

	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	int res=sum4(n);
	printf("Addition of %d natural no.s is: %d",n,res);
	return 0;
}

// Takes nothing, return nothing

void sum1()
{
	int n,s=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		s=s+i;
	}
	printf("Sum of first %d natural no.s is: %d",n,s);
}


// Takes something, return nothing

void sum2(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
	{
		s=s+i;
	}
	printf("Sum of first %d natural no.s is: %d",n,s);
}


// Takes nothing, return something

int sum3()
{
	int n,s=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		s=s+i;
	}
	return s;
}

// Takes something, return something

int sum4(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
	{
		s=s+i;
	}
	return s;
}


