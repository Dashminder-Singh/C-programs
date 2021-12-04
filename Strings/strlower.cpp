#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[20];
	cout<<"Enter a string: ";
	gets(str);

	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='A' && str[i]<='Z')   // A=65 & Z=91 a=65+32=97
		{
			str[i]=str[i]+32;	
		}
	}
	cout<<str;
	return 0;
}