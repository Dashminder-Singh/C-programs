#include <iostream>
using namespace std;

void first(int no)
{
	if(no>1)
		first(no-1);
	cout<<no<<" ";
}

int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;

	first(n);
	return 0;
}