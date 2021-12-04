#include <stdio.h>

long factorial(int);
long find_ncr(int,int);
long find_npr(int,int);

int main()
{
	int n,r;
	printf("Enter the value of n and r: ");
	scanf("%d %d",&n,&r);
	long ncr=find_ncr(n,r);
	long npr=find_npr(n,r);

	printf("%dC%d = %ld\n",n,r,ncr);
	printf("%dP%d = %ld\n",n,r,npr );	
	return 0;
}

long find_ncr(int N,int R)
{
	long ans;
	ans=factorial(N)/factorial(N-R)/factorial(R);
	return ans;
}

long find_npr(int N, int R)
{
	long ans;
	ans=factorial(N)/factorial(N-R);
	return ans;
}

long factorial(int n)
{
	long f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	return f;
}