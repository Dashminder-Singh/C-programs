#include <iostream>
using namespace std;

//void swap(int &x, int &y)
void swap(int *x, int *y)		//pass by pointer
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	//cout<<"A= "<<x<<" B= "<<y<<endl;
	
}

int main()
{
	int a=5,b=10;
	cout<<"A= "<<a<<" B= "<<b<<endl;
	//swap(a,b);
	swap(&a,&b);
	cout<<"A= "<<a<<" B= "<<b<<endl;
	return 0;
}