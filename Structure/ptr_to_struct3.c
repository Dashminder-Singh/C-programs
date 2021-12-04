#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
	int bookid;
	char bookname[20];
};

struct Book * create(int id, char name[])
{
	struct Book *b;
	b=malloc(sizeof(struct Book));
	b->bookid=id;
	strcpy(b->bookname,name);
	return b;
}

void display(struct Book *b)
{
	printf("Book Id: %d\n",b->bookid);
	printf("Book Name: %s\n", b->bookname);
}
int main()
{
	struct Book *b1;
	b1=create(101,"Let us C");
	display(b1);

	return 0;
}