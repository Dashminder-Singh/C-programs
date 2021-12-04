#include <stdio.h>

void wrong_swap(int a, int b) //pass by value
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap(int *x, int *y)   //pass by pointer (or ref) is same in C
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a=4, b=7;
	printf("Before swap: A= %d B=%d\n",a,b);
	//wrong_swap(a,b);  //will not work due to call by value
	swap(&a,&b); // will work due to call by ref(or address)
	printf("After swap: A= %d b=%d\n",a,b);
	return 0;
}