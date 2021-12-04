#include <iostream>
using namespace std;

int main()
{
	char op;
	float a,b;
	cout<<"Enter + or - or * or / : ";
	cin>>op;
	cout<<"Enter two numbers: ";
	cin>>a>>b;

	switch(op)
	{
		case '+':
		cout<<a+b;
		break;

		case '-':
		cout<<a-b;
		break;

		case '*':
		cout<<a*b;
		break;

		case '/':
		cout<<a/b;
		break;

		default:
		cout<<"Error! not found";
	}
	return 0;
}