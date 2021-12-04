#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of Rows: ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		int k=0;
		while(k!=n-i)
		{
			cout<<" ";
			k++;
		}
		for(int j=1; j<=(2*i)-1; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}