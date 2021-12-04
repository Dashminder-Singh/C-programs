#include <iostream>
using namespace std;

//void swap(int a,int b)           //copy by value 

void swap(int &a,int &b)           // copy by refrence_(&)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"A: "<<a<<" B: "<<b<<endl;
}

int main()
{
	int x=10,y=5;
	//cout<<"X: "<<x<<" Y: "<<y<<endl;	
	swap(x,y);   						//pass the value
	cout<<"X: "<<x<<" Y: "<<y<<endl;	
	return 0;
}