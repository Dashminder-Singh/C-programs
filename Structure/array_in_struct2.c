#include <stdio.h> 

struct candidate 
{ 
	int roll_no; 
	char grade; 
	float marks[4]; 
}; 

void display(struct candidate a1) 
{ 

	printf("Roll number : %d\n", a1.roll_no); 
	printf("Grade : %c\n", a1.grade); 
	printf("Marks secured:\n"); 
	int i; 
	int len = sizeof(a1.marks) / sizeof(float); 

	for (i = 0; i < len; i++) 
	{ 
		printf("Subject %d : %.2f\n", i + 1, a1.marks[i]); 
	} 
} 

int main() 
{ 
	struct candidate A 
		= { 1, 'A', { 98.5, 77, 89, 78.5 } }; 

	display(A); 
	return 0; 
} 
