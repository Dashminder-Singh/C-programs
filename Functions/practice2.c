#include <stdio.h>

int main()
{
	int a=6,b=2;
	printf("%d %d %d\n",a,++a,a++);
	printf("%d %d %d\n",b,++b,b++);
	
	/*
	printf("%d\n",a++); //6
	printf("%d\n",++a);	//8
	printf("%d\n",a);	//8  

	printf("%d\n",a++); //6
	printf("%d\n",a);	//7
	printf("%d\n",a++);	//7 */
	return 0;
}