#include <stdio.h>

float avarage(int a,int b,int c)
{
	float avg;
	avg=(float)(a+b+c)/3;
	return avg;
}

float avarage(int,int,int);
int main()
{
	float result;
	result=avarage(4,5,7);
	printf("The avarage of three number is %f",result);
	return 0;
}