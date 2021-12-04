#include <iostream>
using namespace std;

int fibonac(int no)
{
	int result;
	if(no==1 || no==2)
		return 1;
	
	result=fibonac(no-1)+fibonac(no-2);
	return result;
}

int main()
{
	int n;
	cout<<"Enter a number to show series: ";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		cout<<" "<<fibonac(i);
	}
	//cout<<"4th term is "<<fibonac(4);
	
	return 0;
}