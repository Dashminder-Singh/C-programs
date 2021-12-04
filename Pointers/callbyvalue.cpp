#include <iostream>
using namespace std;

int sum(int x, int y)
{
	int z;
	z=x+y;
	y=3434;
	x=24325;
	return z;
}

int main()
{
	int a=4, b=7;
	cout<<"The value of a and b is: "<<a<<" "<<b<<endl;
	cout<<"The value 4+7 is: "<<sum(a,b)<<endl;
	cout<<"The value of a and b after function call is: "<<a<<" "<<b<<endl;
	return 0;
}