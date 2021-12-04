#include <iostream>
using namespace std;

int main()
{
	/*int sum=0;     		// using for loop
	for(int i=1; i<=10; i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of first 10 natural nos is: "<<sum<<endl;
	return 0;*/

	int sum=0,i=1;   	// using do while
	do
	{
		sum=sum+i;
		i++;
	} while (i<=10);
	
	cout<<"Sum of first 10 natural nos is: "<<sum<<endl;
	return 0;
}