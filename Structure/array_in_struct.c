#include <stdio.h>
#include <string.h>

struct student
{
	int rollno;
	char grade;

	float marks[4];
};

void display(struct student stu)
{
	printf("Roll no: %d\n",stu.rollno);
	printf("Grade : %c\n", stu.grade);
	int l=sizeof(stu.marks)/sizeof(float);

	for(int i=0; i<l; i++)
	{
		printf("Subject %d: %.2f\n",i+1,stu.marks[i]);
	}
}

int main()
{
	
	struct student stu;
	printf("Enter Roll no, grade and marks of  student: ");
	scanf("%d",&stu.rollno);
	fflush(stdin);
	scanf("%c",&stu.grade);
	
	int l= sizeof(stu.marks)/sizeof(float);

	for(int i=0; i<l; i++)
	{
		printf("Enter %d Subject of marks: ", i+1);
		scanf("%f",&stu.marks[i]);
	}

	display(stu);
	return 0;
}