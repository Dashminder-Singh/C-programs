#include <iostream>
using namespace std;

int main()
{
	int a=6;
	do
	{
		cout<<" Hi ";
		a++;
	}
	//while(a>4); //infinite loop
	while(a>4 && a<10);
	return 0;
}