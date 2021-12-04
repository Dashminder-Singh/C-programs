#include <stdio.h>

int isleap(int year)
{
	if(year %100==0 && year %400==0 || year %4==0)
		return 1;
	else
		return 0;
}

int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);

	while(isleap(year)!=1)
	{
		if(isleap(year)!=1)
			printf("\nNot a Leap Year.\nEnter a year again: ");
		scanf("%d",&year);
	}
	printf("\nLeap Year\n");
	return 0;
}