#include <stdio.h>
 
 int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d\n",&year);

	if(year%100==0)
	{
		if(year%4==0)
			printf("Leap year");
		else
			printf("Not a Leap year");
	}
	else
	{
		if(year%400==0)
			printf("Leap year");
		else
			printf("Not a Leap year");	
	}
	return 0;
}