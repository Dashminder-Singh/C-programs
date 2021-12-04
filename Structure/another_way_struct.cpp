#include <iostream>
#include <string.h>
using namespace std;

struct employee
{
	int id;
	char name[20];
	float salary;
};

int main()
{
	//struct employee e1={101,"ASHU",34.52}; -> in C language
	 
	 employee e1={101,"ASHU",34.52};  // employee -> data-type 

	cout<<"Employee id: "<<e1.id<<endl;
	cout<<"Employee Name: "<<e1.name<<endl;
	cout<<"Employee Salary: "<<e1.salary<<endl;

	//cout<<"Employee id: "<<e1.id<<"\nEmployee Name: "<<e1.name<<"\nEmployee Salary: "<<e1.salary;

	return 0;
}