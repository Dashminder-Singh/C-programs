#include <iostream>
using namespace std;

int sum(int no)
{
	int s;
	if(no==1)     // base condition
		return no;
	s=no+sum(no-1);
	return s;
}

int main()
{
	int n,k;
	cout<<"Enter a Number: ";
	cin>>n;
	k=sum(n);
	cout<<"Sum of first "<<n<<" natural number is: "<<k;

	//cout<<"Sum of first N natural numbers: "<<sum(n);
	return 0;
}