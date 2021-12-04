#include <stdio.h>
#include <string.h>
int length(char *p)   // p=&str[0]
{

	int l=0;
	while(*(p+l)!='\0')
	{
		l++;
	}
	return l;

/*
	int l=0;
	while(*p!='\0')
	{
		l++;
		p++;
	}*/
	
	/*int l=0,i=0;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}*/
}

int main()
{
	char str[50];
	printf("Enter a string: ");
	gets(str);
	int l=length(str);
	printf("The length of string is: %d",l);
	return 0;
}