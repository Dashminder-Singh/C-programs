#include <stdio.h>

struct date
{
	int d,m,y;
};

int  main()
{
	struct date today;
	today.d=17;
	today.m=11;
	today.y=2020;

	printf("Date: %d/%d/%d",today.d,today.m,today.y);
	return 0;
}