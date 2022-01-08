#include <stdio.h>

int isleap(int year)
{
	if(year %100==0 && year %400==0 || year %4==0)
		return 0;
	else
		return 1;
}

int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);

	while(isleap(year))
	{
		printf("\nNot a Leap Year.\nEnter a year again: ");
		scanf("%d",&year);
	}
	printf("\nLeap Year\n");
	return 0;
}