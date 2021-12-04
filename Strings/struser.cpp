#include <iostream>
using namespace std;

int main()
{
	/* char s[10]={'A','S','H','U','\0'};

	for(int i=0; s[i]!='\0'; i++)
	{
		cout<<s[i]<<" ";
	} */
	
	/* char s[]="ASHU";  Direct assign

	//cout<<s<<" ";
	//puts(&s[0]);   
	//puts(s);    it represent the 1st block of an element,automatically*/

	char s[20];
	cout<<"Enter your name: ";
	//cin>>s;    cannot be used to input multiword strings with spaces 
	//cin>>&s[0];
	gets(s);  		/*user assign
	//gets(&s[0]); 	It is a fn, which can be used to recieve multiword string*/
	//cout<<s;
	//cout<<&s[0];
	//puts(&s[0]);
	puts(s);  //print array
	return 0;
}