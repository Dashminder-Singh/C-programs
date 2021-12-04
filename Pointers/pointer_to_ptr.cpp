#include <iostream>
using namespace std;

int main()
{
	int i=35;
	int *p;
	p=&i;
	int **q;
	q=&p;

	cout<<"The address of i is: "<<&i<<endl;
	cout<<"The address of p is: "<<p<<endl;
	cout<<"The address of p is: "<<&p<<endl;
	cout<<"The address of q is: "<<q<<endl;
	cout<<"The value of i is: "<<i<<endl;
	cout<<"The value of *(&i) is: "<<*(&i)<<endl;
	cout<<"The value of *p is: "<<*p<<endl;
	cout<<"The value of *(&p) is: "<<*(&p)<<endl;
	cout<<"The value of **q is: "<<**q<<endl;

	return 0;
}