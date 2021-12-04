#include <stdio.h>

void input(int *p)
{
	printf("Enter values:\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",(p+i));
	}
}

void sort(int *p)
{
	int t;
	for(int round=1; round<5; round++)
	{
		for(int i=0; i<5- round; i++)
		{
			if(*(p+i)> *(p+i+1))
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}
		}
	}
}

void display(int *p)
{
	for(int i=0; i<5; i++)
	{
		printf("%d ",*(p+i));
	}
}

int main()
{
	int arr[5];
	input(arr);  // pass address of 1st block element
	display(arr);	// pass address of 1st block element
	sort(arr);
	printf("\n");	// pass address of 1st block element
	display(arr);
	return 0;
}