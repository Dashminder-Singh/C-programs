#include <stdio.h>

struct book
{
	int bookid;
	char name[20];
	float price;
};

struct book	input()
{
	struct book b;
	printf("Enter a Bookid,Bookname and price: ");
	scanf("%d",&b.bookid);
	fflush(stdin);
	gets(b.name);
	scanf("%f",&b.price);
	return b;
}

void display(struct book b)  // copy argument  function protoype
{
	printf("\n%d %s %.2f ",b.bookid,b.name,b.price);
}

int main()
{
	struct book b1;
	b1=input();  // takes nothing, return something --> structure return
	display(b1); // structure pass as argument
	return 0;
}