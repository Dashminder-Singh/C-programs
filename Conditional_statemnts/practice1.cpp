#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a Character: ";
	cin>>ch;
	//97-122 ascii values
	if(ch<=122 && ch>=97)
		cout<<"It is a Lowercase";
	else
		cout<<"It is not Lowercase";
	return 0;
}