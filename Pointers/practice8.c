// calculate the sum & avg of two nos, using ptrs

#include <stdio.h>
void sum_avg(int *a,int *b,int *sum,float *avg)
{
	*sum=*a +*b;
	*avg=(float)(*sum)/2;
}

int main()
{
	int i,j,sum;
	float avg;

	i=4;
	j=7;
	sum_avg(&i,&j,&sum,&avg);
	printf("The value of sum is: %d\n", sum);
	printf("The value of avg is: %.2f\n", avg);
	return 0;
}