/* write a program to print multiplication
	table of given number n
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;

	for(int i=0; i<10; i++)
	{
		cout<<n<<"x"<<i+1<<"= "<<n*(i+1)<<endl;
	}
	return 0;
}