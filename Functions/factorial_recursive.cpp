#include <iostream>
using namespace std;

int factorial(int no)
{
	int ans;
	if(no==1)     // base condition
		return no;
	ans=no*factorial(no-1);
	return ans;
}

int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;

	cout<<"Factorial "<<n<<"!= "<<factorial(n);
	return 0;
}