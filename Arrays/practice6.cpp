/* Create an array of 3*10 containing multiplication table of the numbers
	2,7 & 9*/

#include <iostream>
using namespace std;

void table(int multable[],int num, int n)
{
	cout<<"The multiplication table of "<<num<<" is: "<<endl;
	for (int i=0; i<n; i++)
	{
		multable[i]=num*(i+1);
	}

	for(int i=0; i<n; i++)
	{
		cout<<num<<" * "<<i+1<<" ="<<multable[i]<<endl;
	}
	cout<<"******************************************************\n\n";

}
int main()
{
	int multable[3][10];

	table(multable[0],2,10);
	table(multable[1],7,10);
	table(multable[2],9,10);

	return 0;
}