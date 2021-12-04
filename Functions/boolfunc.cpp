#include <iostream>
using namespace std;

bool isprime(int no)  //copy the value
{
	if(no<=2)
	{
		return true;
	}

	for(int i=2; i<no; i++)
	{
		if(no%i==0)
			return false;
	}
	return true;

}
int main()
{
	int n;
	cout<<"Enter a No.: ";
	cin>>n;
	if(isprime(n))					//return true
	{
		cout<<n<<" Is a Prime No."<<endl;
	}
	else							//return false
	{
		cout<<n<<" Not prime No."<<endl;
	}

	return 0;
}