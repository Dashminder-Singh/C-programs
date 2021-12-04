#include <iostream>
using namespace std;

int main()
{
	char s[10]={'A','S','H','U','\0'};
	//char s[]="ASHU";
	char *p=s;

	while(*p!='\0')
	{
		cout<<*p;
		p++;     // p point as a index values
	}
/*
	char p[]="ASHU";
	cout<<p;
	//p="ROHAN";  Incompatible in cpp
	//cout<<p; */
	return 0;
}