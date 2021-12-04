#include <iostream>
using namespace std;

int fun(int a)
{
	int s;
	if(a==1)     // base condition
		return a;
	s=a+fun(a-1);
	return s;
}

int main()
{
	int k;
	k=fun(3);
	cout<<"Sum of 3 natural no = "<<k;
	return 0;
}