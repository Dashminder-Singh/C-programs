#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[20];
	cout<<"Enter a String: ";
	gets(s);

	int i,l;
	l=strlen(s);

	for(i=0; i<l/2; i++)
	{
		if(s[i]!=s[l-1-i])
		{
			cout<<"Not Palindrome"<<endl;
			break;
		}
	}
	if(i==l/2)
		cout<<"Palindrome"<<endl;
/*
	if(i==l)
		cout<<"Palindrome";
	if(s[i]==s[l/2])
		cout<<"Palindrome";  */
	return 0;
}