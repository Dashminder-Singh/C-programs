#include <stdio.h>
#define LEFT 0
#define RIGHT 1

void display(int A[],int N);
void rotate(int A[],int N,int dir,int shift_count);

int main()
{
	int arr[]={10,20,30,40,50,60,70,80};
	display(arr,8);
	rotate(arr,8,RIGHT,2);
	display(arr,8);
	return 0;
}

void display(int A[],int N)
{
	printf("\n");
	for(int i=0; i<N; i++)
	{
		printf(" %d",A[i]);
	}
}

void rotate(int A[], int N, int dir, int shift_count)
{
	int temp;
	if(dir==RIGHT)
	{
		while(shift_count!=0)
		{
			temp=A[N-1];
			for(int i=N-1; i>=1; i--)
				A[i]=A[i-1];
			A[0]=temp;
			shift_count--;
		}
	}
	else
	{
		while(shift_count!=0)
		{
			temp=A[0];
			for(int i=0; i<=N-2; i++)
				A[i]=A[i+1];
			A[N-1]=temp;
			shift_count--;
		}
	}
}