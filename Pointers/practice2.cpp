#include <iostream>
using namespace std;

int main()
{
	const int i=15;
	const int* const p=&i;
	(*p)++;    //error: increment of read-only loc '*(cont int*)p'

	int j=10;
	p=&j;	//error: assignment of read-only variable 'p'
	cout<<i;
	return 0;
}