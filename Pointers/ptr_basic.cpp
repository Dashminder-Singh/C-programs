#include <iostream>
using namespace std;

int main()
{
	int i=8;
	//int *j=&i;
	int *j;
	j=&i;

	cout<<"Address of: "<<&i<<endl;
	cout<<"Address of: "<<j<<endl;
	cout<<"Address of: "<<&j<<endl;
	cout<<"Value of: "<<i<<endl;
	cout<<"Value of: "<<*(&i)<<endl;
	cout<<"Value of: "<<*j<<endl;
	cout<<"Value of: "<<*(&j)<<endl;
	return 0;
}