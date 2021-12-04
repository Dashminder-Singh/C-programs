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
	struct employee e1;
	e1.id=101;
	strcpy(e1.name, "Ashu");
	e1.salary=3.40;

	//printf("Employee_id: %d\nEmployee_name: %s\nEmployee_salary: %f",e1.id,e1.name,e1.salary);
	printf("Employee id:%d\n",e1.id );
	printf("Employee Name:%s\n",e1.name );
	printf("Employee Salary:%.2f\n",e1.salary );
	return 0;
}