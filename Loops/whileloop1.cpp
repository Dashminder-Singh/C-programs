#include <iostream>
using namespace std;

int main()
{
	int i=7;
	while(i<10 && i>5)
	//while(i<10 || i>5) //infinite loop
	{
		cout<<"Hi "<<endl;
		i++;
	}
	return 0;
}