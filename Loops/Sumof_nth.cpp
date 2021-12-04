#include <iostream>
using namespace std;

int main()
{
	int n, a=5, d=2, an=0, sn=0;
	cout<<"Enter the value of n: ";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		an = a + ((i-1)* d);
		cout<<" Term "<<i<<" = "<<an<<endl;
		sn=sn+an;
	}
	cout<<"Sum of nth term is: "<<sn<<endl;
	return 0;
}