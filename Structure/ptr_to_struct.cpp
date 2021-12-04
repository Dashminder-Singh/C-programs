#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
	int bookid;
	char title[20];
	float price;
};

int main()
{
	/*int i=10;  example of pointer type
	int *p;
	p=&i;*/

	struct Book b1;
	struct Book *p;

	p=&b1;
	(*p).bookid=101;
	
	//(*ptr).bookid = 101; 
	//or you can also write: ptr->bookid = 101;

	strcpy((*p).title,"Let Us C");
	(*p).price=200.50;

	cout<<"Bookid: "<<(*p).bookid<<endl;
	cout<<"BookName: "<<(*p).title<<endl;
	cout<<"BookPrice: "<<(*p).price<<endl;

/*	cout<<"Bookid: "<<b1.bookid<<endl;
	cout<<"BookName: "<<b1.title<<endl;
	cout<<"BookPrice: "<<b1.price<<endl;*/
	
	return 0;
}