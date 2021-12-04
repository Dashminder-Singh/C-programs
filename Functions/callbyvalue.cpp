#include <iostream>
using namespace std;

void func(int no)   //copy the value of new variable
{
	no=no*no;
	cout<<"Value in Function: "<<no<<endl;
	//return no;      for int, char, float and bool type,the value willbe return
}
int main()
{
	int n;
	cout<<"Enter value: ";
	cin>>n;
	func(n); //call function & pass the value
	cout<<"Value in Main: "<<n<<endl;
 
	return 0;
}