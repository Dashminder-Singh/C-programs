#include <stdio.h>
#include <string.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void display(struct student stu[], int N)
{
	for(int i=0; i<N; i++)
	{
		printf("Roll No: %d\n",stu[i].rollno);
		printf("Name: %s\n", stu[i].name);
		printf("Avarage Marks: %.2f\n", stu[i].marks);
		printf("\n");
	}
}

int main()
{
	int n;
	printf("Enter how many student: ");
	scanf("%d",&n);

	struct student stu[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter the Roll no, name & marks of %d student: ",i+1);
		scanf("%d",&stu[i].rollno);
		fflush(stdin);
		gets(stu[i].name);
		scanf("%f",&stu[i].marks);
	}

	display(stu,n);
	return 0;
}