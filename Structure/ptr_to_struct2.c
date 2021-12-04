#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
};

struct student *createstudent(struct student *s,int id,char a[])
{
	//s= malloc(sizeof(struct student));
	s=malloc(sizeof(*s));
	(*s).id=id;
	strcpy((*s).name, a);
	return s;
}
void display(struct student *s)
{
	printf("Student ID: %d\n", s->id);
	printf("Student Name: %s\n", s->name);
}

int main()
{
	struct student *s1= createstudent(s1,101,"Ashu");
	display(s1);

	return 0;
}