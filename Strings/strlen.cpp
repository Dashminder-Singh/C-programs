#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	//char s[]="ASHU";
	char s[10];
	cout<<"Enter a string: ";
	gets(s);
	int a=strlen(s);
	cout<<"The length of string is: "<<a;
	return 0;
}