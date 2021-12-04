#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s1[10],s2[10];
	cout<<"Enter a string: ";
	gets(s1);

	strcpy(s2,s1);
	strrev(s2);

	if(strcmp(s1,s2)==0)
	{
		cout<<"Palindrome"<<endl;
	}
	else
	{
		cout<<"Not Palindrome"<<endl;
	}

	return 0;
}