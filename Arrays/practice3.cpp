/*Create an array of N integers 
using genral input & store multiplication table of 5 on it*/

#include <iostream>
using namespace std;

int main()
{
	int A[50],num;
	cout<<"Enter No: ";
	cin>>num;
	for(int i=0; i<num; i++)
	{
		A[i]=5*(i+1);

	}
	for (int i=0; i<num; i++)
	{
		cout<<"5 *"<<i+1<<"="<<A[i]<<endl;
	}
	return 0;
/*
	int A[50],num;
	cout<<"Enter No: ";
	cin>>num;
	for(int i=0; i<10; i++)
	{
		A[i]=num*(i+1);

	}
	for (int i=0; i<10; i++)
	{
		cout<<num<<" *"<<i+1<<"="<<A[i]<<endl;
	}
	return 0;*/
}