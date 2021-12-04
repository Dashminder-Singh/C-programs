#include <iostream>
using namespace std;

int main()
{
	for(int i=0; i<=1; i++)
		for(int j=0; j<=2; j++)
			if((i+1==j) || (j+i)==2)
			{
				cout<<"X ";
			}
			else
			{
				cout<<"O ";
			}
	return 0;
}