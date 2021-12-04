#include <iostream>
using namespace std;

int main()
{
	int A[10];

	int *p=A;
	p=p+2;

	if(p==&A[2])
	{
		cout<<"These point to the same location in memory"<<endl;
	}
	else
	{
		cout<<"These do not point to the same location in memory"<<endl;

	}
	return 0;
}