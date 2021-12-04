#include<string.h> 
#include<stdio.h> 
#include<stdlib.h> 
 
struct student 
{ 
	int stud_id; 
	int name_len; 

	int struct_size; 

	char stud_name[]; 
}; 

struct student *createStudent(struct student *s, int id, char a[]) 
{ 
		s = malloc( sizeof(*s) + sizeof(char) * strlen(a)); 

	s->stud_id = id; 
	s->name_len = strlen(a); 
	strcpy(s->stud_name, a); 

	s->struct_size = 
	(sizeof(*s) + sizeof(char) * strlen(s->stud_name)); 

	return s; 
} 
 
void printStudent(struct student *s) 
{ 
	printf("Student_id : %d\n"
		"Stud_Name : %s\n"
		"Name_Length: %d\n"
		"Allocated_Struct_size: %d\n\n", 
		s->stud_id, s->stud_name, s->name_len, 
		s->struct_size); 

	} 

int main() 
{ 
	struct student *s1 = createStudent(s1, 523, "Cherry"); 
	struct student *s2 = createStudent(s2, 535, "Sanjayulsha"); 

	printStudent(s1); 
	printStudent(s2); 

	printf("Size of Struct student: %lu\n", 
					sizeof(struct student)); 

	printf("Size of Struct pointer: %lu", 
							sizeof(s1)); 

	return 0; 
} 
