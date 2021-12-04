#include <iostream>
using namespace std;

int main()
{
	char s[3][10];
	cout<<"Enter Three strings: ";
	/*gets(&s[0][0]);
	gets(&s[1][0]);
	gets(&s[2][0]);
	cout<<endl;
	puts(&s[0][0]);
	puts(&s[1][0]);
	puts(&s[2][0]);*/

	for(int i=0; i<=2; i++)
	{
		gets(s[i]);
		//gets(&s[i][0]);
	}
	for(int i=0; i<=2; i++)
	{
		cout<<s[i]<<" ";
		//puts(s[i]);
		//puts(&s[i][0]);
	}
	return 0;
}