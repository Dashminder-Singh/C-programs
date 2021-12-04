// write a program to decrypt a string encrypted using previous problem3

#include <iostream>
using namespace std;

void decrypt(char c[])
{
	int i=0;
	while(c[i]!='\0')
	{
		c[i]=c[i]-1;
		i++;
	}
}

int main()
{
	//char c[]="Dpnf!up!uijt!sppn";
	char c[]="Ebtinjoefs!Tjohi";
	decrypt(c);
	cout<<"Decrypted string is: "<<c;
	return 0;
}