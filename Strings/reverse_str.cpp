#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[20];
	cout<<"Enter a String: ";
	gets(s);

	int temp,l;
	l=strlen(s);
	for(int i=0; i<l/2; i++)
	{
		temp=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=temp;
	}
	cout<<"Reverse is: "<<s;

	return 0;
}