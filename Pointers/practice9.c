/* print the address of i, 
pass this variable to a fn & print its address.
Are these address same?why?
*/
#include <stdio.h>

/*void address(int *a)
{
	printf("The address of a is: %d\n",*a);
}*/

void address(int a)
{
	printf("The address of a is: %d\n",&a);
}

int main()
{
	int i=4;
	printf("The value of i is: %d\n",i);
	address(i);
	printf("The address of i is: %d",&i);
	return 0;
}