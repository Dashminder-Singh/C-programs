#include <iostream>
using namespace std;

struct date
{
	int d,m,y;
};
int main()
{
	//struct date d1;  // in C language
	date d1;
	cout<<"Enter Today's Date: ";
	cin>>d1.d>>d1.m>>d1.y;
	cout<<"Date: "<<d1.d<<d1.m<<d1.y;
	return 0;
}