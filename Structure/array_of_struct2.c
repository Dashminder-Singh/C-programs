#include <stdio.h>
#include <string.h>
struct Book
{
	int bookid;
	char bookname[20];
	float bookprice;
};

int main()
{
	int n;
	printf("Enter how many books: ");
	scanf("%d",&n);
	struct Book b1[n];
	
	for(int i=0; i<n; i++)
	{
		printf("Enter Book id, name and price of %d books: ",i+1);
		scanf("%d", &b1[i].bookid);
		fflush(stdin);
		gets(b1[i].bookname);
		scanf("%f", &b1[i].bookprice);
	}

	for(int i=0; i<n; i++)
	{
		printf("Book id: %d\n", b1[i].bookid);
		printf("Book Name: %s\n", b1[i].bookname);
		printf("Book Price: %.2f\n", b1[i].bookprice);
		printf("\n");
	}
	return 0;
}