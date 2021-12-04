
/*create a 3-d array 
& print the address of element in increasing order*/
#include <iostream>
using namespace std;

int main()
{
	int arr[2][3][4];
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<4; k++)
			{
				cout<<"The address of arr[][][] is: "<<i<<j<<k<<&arr[i][j][k]<<endl;
			}
		}
	}

	return 0;
}