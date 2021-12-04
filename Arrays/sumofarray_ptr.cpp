#include <iostream>
using namespace std;

int main()
{
	int N,arr[20],sum=0;
	int *p;
	cout<<"Enter how many numbers you want: ";
	p=arr;
	cin>>N;
	cout<<"Enter "<<N<<" elements: ";
	for(int i=0; i<N; i++)
	{
		cin>>*p;
		sum=sum+*p;
	}
	cout<<"Sum is: "<<sum<<endl;
	return 0;
}