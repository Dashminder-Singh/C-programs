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

int combi(int n,int r)
{
	int c;
	c=fact(n)/fact(n-r)/fact(r);
	return c;
}

void pascal(int line)
{
	for(int i=1; i<=line; i++)
	{
		int k=1,r=0;
		for(int j=1; j<=(2*line)-1; j++)
		{
			
			if(j>=line+1-i && j<=line-1+i && k)
			{
				cout<<combi(i-1,r);
				k=0; r++;
			}
			else
			{
				cout<<" ";
				k=1;
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