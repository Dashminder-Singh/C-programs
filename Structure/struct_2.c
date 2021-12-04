#include <stdio.h>

struct date   // date is a data-type(user-defined)
{
	int d,m,y;
};

int  main()
{
	struct date today,d1;    // today & d1 is a variable of date(data-type)
	//d1=today;   

	printf("Enter today's date ");
	
	scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
	printf("Date: %d/%d/%d",d1.d,d1.m,d1.y);

	//scanf("%d/%d/%d",&today.d,&today.m,&today.y);
	//printf("Date: %d/%d/%d",today.d,today.m,today.y);
	return 0;
}