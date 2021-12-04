#include <iostream>
#include <string.h>
using namespace std;

void reverse(char st[],int n)
{
	int temp;
	for(int i=0; i<n/2; i++)
	{
		temp=st[i];
		st[i]=st[n-1-i];
		st[n-1-i]=temp;
	}
}

int main()
{
	char s[20];
	cout<<"Enter a String: ";
	gets(s);

	int l=strlen(s);
	reverse(s,l);
	cout<<"Reverse is: "<<s;

	/*for(int i=0; i<l; i++)
	{
		cout<<s[i]<<" ";
	}*/
	return 0;
}