#include <iostream>
#include <string.h>
using namespace std;

int ispalindrome(char st[])
{
	int i,l;
	l=strlen(st);

	for(i=0; i<l/2; i++)
	{
		if(st[i]!=st[l-1-i])
		{
			return 0;   // false -> Not palindrome
		}
	}
	return 1; // true -> palindrome
}

int main()
{
	char s[20];
	cout<<"Enter a String: ";
	gets(s);

	if(ispalindrome(s))
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";

	return 0;
}