#include <iostream>
#include <string.h>
using namespace std;

typedef struct employee 
{
	int id;
	char name[20];
	float salary;
}emp;	// new data-type -> emp

void show(emp e)  // e is a copy variable of e1
{
	cout<<"Employee_id: "<<e.id<<endl;
	cout<<"Employee_Name: "<<e.name<<endl;
	cout<<"Employee_salary: "<<e.salary<<endl;
}

int main()
{
	// Declaring e1 and ptr
	emp e1;
	emp *p;
	// pointing ptr to e1
	p=&e1;

    // Set the member values for e1
	(*p).id=101;
	strcpy((*p).name, "ASHU");
	(*p).salary=5.50;

	show(e1);  //pass the arguments
	return 0;
}