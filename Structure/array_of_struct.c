#include <stdio.h>
#include <string.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};

int main()
{
	struct employee facebook[50];
	facebook[0].id=101;
	strcpy(facebook[0].name,"ASHU");
	facebook[0].salary=50.0;

	printf("\n%d %s %.2f",facebook[0].id,facebook[0].name,facebook[0].salary);

	facebook[1].id=102;
	strcpy(facebook[1].name,"ROHAN");
	facebook[1].salary=65.0;
	printf("\n%d %s %.2f",facebook[1].id,facebook[1].name,facebook[1].salary);

	return 0;
}