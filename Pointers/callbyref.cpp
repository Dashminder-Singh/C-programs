#include <iostream>
using namespace std;

void wrong_swap(int a, int b) //pass by value
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap(int &x, int &y)   //pass by ref
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a=4, b=7;
	cout<<"The value of a and b, Before swap: "<<a<<" "<<b<<endl;
	//wrong_swap(a,b);  will not work due to call by value
	swap(a,b); // will work due to call by ref
	cout<<"The value of a and b, after swap: "<<a<<" "<<b<<endl;
	return 0;
}