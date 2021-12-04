#include <iostream>
using namespace std;

char firstcapital(char arr[10],char n)  //copy the value
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]>='A' && arr[i]<='Z')     // A=65 & Z=90
			return arr[i];
	}
}
int main()
{
	int n=10;
	char arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"First capital char: "<<firstcapital(arr,n)<<endl; //pass the value
	
	return 0;
}