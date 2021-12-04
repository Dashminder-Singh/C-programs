#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
	int bookid;
	char bookname[20];
};

struct Book *create()
{
	struct Book *b;
	b=malloc(sizeof(struct Book));
	printf("Enter Book Id and Book Name: ");
	scanf("%d",&b->bookid);
	fflush(stdin);
	gets(b->bookname);
	return b;
}

void display(struct Book *b2)
{
	printf("Book Id: %d\n",b2->bookid);
	printf("Book Name: %s\n", b2->bookname);
}

int main()
{
	struct Book *b1;
	//struct Book *b2;
	b1=create();
	//b2=create();
	display(b1);
	//printf("\n");
	//display(b2);
	return 0;
}