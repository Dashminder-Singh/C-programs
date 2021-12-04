#include <iostream>
using namespace std;

int main()
{
	int a=10, *pa, &ra; //error:'ra' declared as reference but not initialized

	pa=&a;
	ra=a;

	cout<<"a = "<<ra<<endl;

	//cout<<"a = "<<&ra;
	return 0;
}