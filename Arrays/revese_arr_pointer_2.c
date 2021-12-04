#include <stdio.h>

int main()
 {
 	int n;
 	printf("Enter how many value: ");
 	scanf("%d",&n);
 	int arr[n];
 	int *p;
 	//p=arr;
 	p=&arr[0];

 	printf("Enter the %d values: ",n);
 	for(int i=0; i<n; i++)
 	{
 		scanf("%d",(p+i));
 	}

 	p=&arr[n-1];
 	printf("Reverse is:\n");
 	for(int i=n-1; i>=0; i--)
 	{
 		printf("%d ",*p);
 		p--;
 	}
 	return 0;
 }