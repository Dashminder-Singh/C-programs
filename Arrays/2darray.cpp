#include <iostream>
using namespace std;

int main()
{
	int arr[5][5];
	for(int i=0; i<5; i++)		//Row
	{
		for(int j=0; j<5; j++)	//Column
		{
			cin>>arr[i][j];
		}
	}
		cout<<endl;
	
	for(int i=0; i<5; i++)		//Row
	{
		for(int j=0; j<5; j++)	//Column
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}