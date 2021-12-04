#include <stdio.h>
#include <string.h>

struct student
{
	int rollno;
	char name[20];
};

void create(struct student s1[])
{
	for(int i=0; i<3; i++)
	{
		printf("Enter the Roll No and Name of %d student: ",i+1);
		scanf("%d",&s1[i].rollno);
		fflush(stdin);
		gets(s1[i].name);
	}
}

void display(struct student s1[])
{
	for(int i=0; i<3; i++)
	{
		printf("Roll No: %d\n",s1[i].rollno);
		printf("Name: %s\n", s1[i].name);
		printf("\n");
	}
}

int main()
{
	struct student stu[3];
	create(stu);
	display(stu);
	return 0;
}