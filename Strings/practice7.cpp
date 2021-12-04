// Write a program to check whether a given char is present in string

#include <iostream>
#include <string.h>
using namespace std;

void present(char s[], char c)
{
	char *p=s;
	while(*p!='\0'){
		if(*p==c)
		{
			cout<<s<<" Character is present"<<endl;
		}
		else
		{
			cout<<s<<" Not present"<<endl;
		}
		p++;
	}
}

int main()
{
	char s[10];
	cout<<"Enter a string: "<<endl;
	gets(s);
	present(s,'A');

	return 0;
}