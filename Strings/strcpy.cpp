#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s1[]="ROHAN";
	char s2[10];
	strcpy(s2,s1);
	//strcpy(s,"SAMAR");
	cout<<"Now the str is: "<<s2;
	return 0;
}