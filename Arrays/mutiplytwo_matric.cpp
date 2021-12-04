#include <iostream>
using namespace std;

int main()
{
	int A[3][3], B[3][3], C[3][3];
	cout<<"Enter 9 numbers for first matrix: ";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>A[i][j];
		}
	}

	cout<<"Enter 9 numbers for second matrix: ";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>B[i][j];
		}
	}

	cout<<"Mutliply two matrix: "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			int sum=0;
			for(int k=0; k<3; k++)
			{
				sum=sum+A[i][k]*B[k][j];
			}
			C[i][j]=sum;
			cout<<C[i][j]<<"\t";	
		}
		cout<<endl;	
	}
	return 0;
}