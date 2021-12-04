// strore the integers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int *p;
	int n;

	printf("How many integers do you want to enter:\n");
	scanf("%d",&n);
	p=(int *)calloc(n, sizeof(int));

	for (int i=0; i<n; i++)
	{
		printf("Enter the value of %d element:\n",i+1);
		//scanf("%d",&p[i]);
		scanf("%d",p+i);
	}
	for (int i=0; i<n; i++)
	{
		//printf("the value of %d element:%d\n",i,p[i]);
		printf("the value of %d element:%d\n",i+1,*(p+i));
	}
	return 0;
}