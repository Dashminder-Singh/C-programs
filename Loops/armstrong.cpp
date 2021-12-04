#include <iostream>
using namespace std;

int main()
{
	int n,x,r,s;                            //x is a temporary variable
	cout<<"Armstrong Numbers: "<<endl;

	for(int n=1; n<=1000; n++)
	{
		s=0;
		x=n;
		while(x!=0)
		{
			r=x%10;
			s=s+(r*r*r);
			x=x/10;
		}
		if(s==n)
			cout<<n<<endl;
	}
	return 0;
}