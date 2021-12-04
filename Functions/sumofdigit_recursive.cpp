#include <iostream>
using namespace std;

int sumof_digit(int no)
{
	int s;
	//if(no==0)
	if(no/10==0)   //base condition
		return no;
	s=no%10+sumof_digit(no/10);
	return s;
}

int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;

	cout<<"Sum of digits: "<<sumof_digit(n);
	return 0;
}