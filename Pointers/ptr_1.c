#include <stdio.h>

void change(int *x) // call by ref
{
	*x=7;
}

/*void change(int x)  // call by value
{
	x=7;
}*/


int main()
{
	int a=6;
	//change(a);
	change(&a);
	printf("%d ",a);
	return 0;
}