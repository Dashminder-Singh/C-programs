/* Write a structure to store date and
 Write a Fn to compare those dates*/

#include <stdio.h>

typedef struct date
{
	int d,m,y;
}date;

void show(date d)
{
	printf("Date: %d/%d/%d\n",d.d,d.m,d.y);
}

int datecmp(date d1, date d2)
{
	// Make decision on the basis of Year comparison
	if(d1.y>d2.y){
		return 1;
	}
	if(d1.y<d2.y){
		return -1;
	}

	// Make decision on the basis of Month comparison
	if(d1.m>d2.m){
		return 1;
	}
	if(d1.m<d2.m){
		return -1;
	}

	// Make decision on the basis of Day comparison
	if(d1.d>d2.d){
		return 1;
	}
	if(d1.d<d2.d){
		return -1;
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	date d1={18,11,2020};
	date d2={26,11,2020};
	show(d1);
	show(d2);
	int a=datecmp(d1,d2);
	printf("\nDate Comparison Fn returns: %d\n",a);
	return 0;
}