#include <iostream>
using namespace std;

int main()
{
	char s[10]={'A','S','H','U','\0'};

	/*for(int i=0; i<4; i++)
	{
		cout<<s[i]<<" ";
	}

	for(int i=0; s[i]!='\0'; i++)
	{
		cout<<s[i]<<" ";
	}*/
	
	//char s[]="ASHU";  // Direct assign

	//cout<<s;
	//puts(&s[0]);   
	puts(s);   /* it represent the 1st block of an element,automatically
				print the string, place cursor on the next line*/
	return 0;
}