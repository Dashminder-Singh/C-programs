#include <iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter a year: ";
	cin>>year;

	if(year%4)
	{
		cout<<"Not a Leap year";
	}
	else if(year%100)
	{
		cout<<"Leap year";
	}
	else if(year%400)
	{
		cout<<"Not a Leap year";
	}
	else
	{
		cout<<"Leap year";
	}
	return 0;
}