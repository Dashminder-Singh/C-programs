#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
	int bookid;
	char title[20];
	float price;	
};

struct Book input()  // Book -> data-type fn
{
	struct Book b;
	struct Book *p;
	p=&b;

	cout<<"Enter Book Id, Name and Price: ";
	cin>>(*p).bookid;
	fflush(stdin); // fresh input buffer
	gets((*p).title);
	cin>>(*p).price;

	return b;
}

void show(struct Book b)
{
	cout<<"Bookid: "<<b.bookid<<endl;
	cout<<"BookName: "<<b.title<<endl;
	cout<<"BookPrice: "<<b.price<<endl;
}

int main()
{
	struct Book b1;
	b1=input();
	show(b1);
	return 0;
}