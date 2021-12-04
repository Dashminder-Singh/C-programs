/* write a program to find the difference b|w the 
	largest and smallest numbers from a list of numbers
*/

#include <iostream>
using namespace std;

int difference(int A[], int no)
{
	int max=0, min=A[0], diff;
	
	for(int i=0; i<no; i++)
	{
		if(A[i]>max)
		{
			if(A[i]<min)
			{
				min=A[i];
			}
			max=A[i];
		}
	}
	diff=max-min;
	return diff;
}

int main()
{
	int n, arr[20];
	cout<<"Enter input: ";
	cin>>n;
	cout<<"Enter values: "<<endl;

	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Differnce is:"<<difference(arr,n);
	return 0;
}