#include <iostream>
using namespace std;

int main()
{
	int n,r,i=0;
	int arr[20];
	cout<<"Enter a No. ";
	cin>>n;

	while(n!=0)
	{
		r=n%2;
		n=n/2;
		arr[i]=r;
		i++;
	}

	for(int j=i-1; j>=0; j--)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}