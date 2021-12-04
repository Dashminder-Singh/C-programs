#include <iostream>
using namespace std;

int fact(int no)
{
	int f=1;
	while(no>=1)
	{
		f=f*no;
		no--;
	}
	return f;
}

int combi(int n,int r)  //copy values
{
	int c;
	c=fact(n)/fact(n-r)/fact(r);
	return c;
}

void pascal(int line)
{
	for(int i=1; i<=line; i++)
	{
		int k=0, r=0;
		while(k!=line-i)
		{
			cout<<" ";
			k++;
		}
		for (int j=1; j<=(2*i)-1; j++)
		{
			if(j%2==0)
			{
				cout<<" ";
				
			}
			else
			{
				cout<<combi(i-1,r);  // n=i-1, r  nCr  n=1,r=1 nC0,nC1,nC2... <-combi fn call
				r++;
			}
		}
		cout<<endl;
	}
}

int main()
{
	int N;
	cout<<"Enter the number of lines: ";
	cin>>N;
	pascal(N);
	return 0;
}