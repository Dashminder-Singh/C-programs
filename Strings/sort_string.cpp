#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[5][10], s[10];  // temp string
	int r;
	cout<<"Enter 5 names: ";
	for(int i=0; i<5; i++)
	{
		gets(str[i]);
	}

	/* r=strcmp(str[0],str[1]);  it returns 0,they are in equal order
	 	it retuns -1,they are in dictionary order

	if(r>0)   // it return 1,they are not in dictionary order
	{
		strcpy(s,str[0]);
		strcpy(str[0],str[1]);   // swap
		strcpy(str[1],str[2]);
	} */

	for(int round=1; round<5; round++)
	{
		for(int i=0; i<5-round; i++)
		{
			r=strcmp(str[i],str[i+1]);
			if(r>0)   
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[i+1]);   
				strcpy(str[i+1],s);
			}
		}
	}

	cout<<"\nStrings in dictionary order:\n";
	for(int i=0; i<5; i++)
	{
		puts(str[i]);
	}
	return 0;
}