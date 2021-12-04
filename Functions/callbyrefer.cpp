#include <iostream>
using namespace std;

void func(int &no)   		//copy the value of new variable with refrence_(&)
{
	no=no*no;
	cout<<"Value in Function: "<<no<<endl;

int main()
{
	int n;
	cout<<"Enter value: ";
	cin>>n;
	func(n); 					//call function & pass the value by refrence
	cout<<"Value in Main: "<<n<<endl;
 
	return 0;
}