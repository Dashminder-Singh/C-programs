// Write a program of strlen fn, without using string.h

#include <iostream>
using namespace std;

int strlen(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	return i;
/*
	int l=0,i=0;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	return l;  */

	/*int l=0;
	char *p=s;
	while(*(p+l)!='\0')  
	{
		l++;
	}
	return l;*/
}

int main()
{
	char s[]="DASHMINDER";
	int a=strlen(s);
	cout<<"The length of string is: "<<a;
	return 0;
}