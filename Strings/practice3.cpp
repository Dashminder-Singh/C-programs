// write a program to encrypt a string by adding 1

#include <iostream>
using namespace std;

void encrypt(char c[])
{
	int i=0;
	while(c[i]!='\0')
	{
		c[i]=c[i]+1;
		i++;
	}
}

int main()
{
	char c[]="Dashminder Singh";
	encrypt(c);
	cout<<"Encrypted string is: "<<c;
	return 0;
}