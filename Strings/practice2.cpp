// Write a program to slice a string,where m is starting & n is end pt.

#include <iostream>
using namespace std;

void slice(char s[],int m,int n)
{
	int i=0;
	while((m+i)<n)
	{
		s[i]=s[m+i];
		i++;
	}
	s[i]='\0';
}

int main()
{
	char s[]="Dashminder";
	cout<<"Before: "<<s<<endl;
	slice(s,1,6);
	cout<<"After: "<<s;
	return 0;
}