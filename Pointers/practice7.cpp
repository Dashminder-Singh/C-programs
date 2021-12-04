// calculate the sum & avg of two nos, using ptrs

#include <iostream>
using namespace std;

void sum_avg(int a,int b,int *sum,float *avg)
{
	*sum=a+b;
	*avg=(float)(*sum)/2;
}

int main()
{
	int i,j,sum;
	float avg;

	i=4;
	j=7;
	sum_avg(i,j,&sum,&avg);
	cout<<"The value of sum is: "<<sum<<endl;
	cout<<"The value of avg is: "<<avg<<endl;

	return 0;
}