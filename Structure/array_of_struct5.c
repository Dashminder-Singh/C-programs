#include <stdio.h>
#include <string.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void display(struct student s1[3])
{
	int l=3;
	for(int i=0; i<l; i++)
	{
		printf("RollNo: %d\n", s1[i].rollno);
		printf("Name : %s\n", s1[i].name);
		printf("Overall marks: %.2f\n", s1[i].marks);
		printf("\n");
	}
}

int main()
{
	struct student stu[3]= { {101,"Ashu",89.5},
	{102, "Rohan",70.5 }, {103, "Samar",83.5} };
	display(stu);
	return 0;
}