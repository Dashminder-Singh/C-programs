/*Create an array of 10 integers 
& store multiplication table of 5 on it*/

#include <iostream>
using namespace std;

int main()
{
	int A[10];

	for(int i=0; i<10; i++)
	{
		A[i]=5*(i+1);
	}
	for (int i=0; i<10; i++)
	{
		cout<<"5 * "<<i+1<<" ="<<A[i]<<endl;
	}
	return 0;
}