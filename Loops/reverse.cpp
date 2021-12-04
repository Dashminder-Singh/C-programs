#include <iostream>
using namespace std;

int main()
{
	int n,y=0,r;                 //y is a reverse variable,r is remainder
	cout<<"Enter the Number: ";
	cin>>n;

	while(n!=0)
	{
		r=n%10;
		y=(y*10)+ r;
		n=n/10;
	}

	//system("pause");
	cout<<"Reverse is: "<<y<<endl;
	return 0;
}