#include <iostream>
using namespace std;

int pow(int no, int po)    /*recive the value and copy the value of new box*/
{
	int ans=1;
	for(int i=1; i<=po; i++)
	{
		ans=ans*no;
	}
	return ans;
}
int main() 
{
	int n,p;
	cout<<"Enter No.: ";
	cin>>n;
	cout<<"Enter Power: ";
	cin>>p;

	/*pow(n,p);			pass the value  */
	cout<<"Answer is: "<<pow(n,p);    
	return 0;
}