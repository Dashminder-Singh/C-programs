// sum of first 10 natural nos using while loop
#include <iostream>
using namespace std;

int main()
{
	int i=1, sum=0;
	while(i<=10)
	{
		sum=sum+i;
		i++;
	}

	cout<<"Sum of first 10 natural nos is: "<<sum<<endl;
	return 0;
}