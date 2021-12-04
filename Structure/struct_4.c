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
	struct employee e1,e2,e3;
	printf("Enter the id,name and salary of  employee: ");
	scanf("%d",&e1.id);
	scanf("%s",&e1.name);
	scanf("%f",&e1.salary);

	printf("\n%d %s %.2f",e1.id,e1.name,e1.salary);

	printf("\nEnter the Id,Name and Salary of Second employee: ");
	scanf("%d",&e2.id);
	scanf("%s",&e2.name);
	scanf("%f",&e2.salary);

	printf("\n%d %s %.2f",e2.id,e2.name,e2.salary);

	printf("\nEnter the Id,Name and Salary of Third employee: ");
	scanf("%d",&e3.id);
	scanf("%s",&e3.name);
	scanf("%f",&e3.salary);

	printf("\n%d %s %.2f",e3.id,e3.name,e3.salary);

	return 0;
}