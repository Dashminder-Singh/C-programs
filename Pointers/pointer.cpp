#include <iostream>
using namespace std;

int main()
{
	int a=7;
	//int *p=&a;
	int *p;
	p=&a;
	int &ref=a;


	cout<<"Address of "<<a<<" is "<<&a<<endl;
	cout<<"Pointer "<<p<<" is pointing "<<*p<<endl;

	//cout<<"Address of "<<a<<" is "<<&ref<<endl;

	return 0;
}