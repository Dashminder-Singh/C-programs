#include <stdio.h>

void change(int);
void change(int x)
{
	x=87;
	printf("The value of b after change: %d\n",x);

}

int main()
{
	int b=45;
	printf("The value of b before change: %d\n",b);
	change(b);
	return 0;
}