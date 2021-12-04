#include <stdio.h>

enum boolean
{
	false,true
};

enum boolean iseven(int no)
{
	if(no%2==0)
	{
		return true; // retrun 1
	}
	else
	{
		return false; // return 0
	}
}

int main()
{
	int n;
	printf("Enter a Number:\n");
	scanf("%d",&n);
	int result=iseven(n);

	if(result==true)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}