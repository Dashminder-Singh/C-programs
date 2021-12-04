#include <iostream>
#include <string.h>
using namespace std;

union number
{
	double x;
	float y;
	char z;
};

int main()
{
	number n;   // in C++, number is a data-type
	n.x=285.75;
	n.y=4.5;
	n.z='A';

	cout<<"X= "<<n.x<<endl;
	cout<<"Y= "<<n.y<<endl;
	cout<<"Z= "<<n.z<<endl;
	return 0;
}