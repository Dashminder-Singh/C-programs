#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *remove_spaces(char *s)
{
	int i=0,j=0;
	char *p;

	p=(char*)malloc(strlen(s+1)); // add null , total lenghth=25
	while(*(s+i)!='\0')
	{
		while(*(s+i)==' ')  // ignore spaces
			i++;
		while(*(s+i)!=' ' && *(s+i)!='\0'){
			*(p+j)=*(s+i);
			i++;
			j++;
		}
		if(*(s+i)=='\0' && *(p+j-1)==' ')   // overwrite 
			j--;
		*(p+j)=*(s+i);  // 1 space store
		j++;
	}
	return p;
}

int count_words(char *s)
{
	int i=0, count=0;
	while(*(s+i)!='\0')
	{
		if(*(s+i)==' ')
			count++;
		i++;
	}
	return count+1;   // 4 spaces and 5 words= count+1
}
int main()
{
	int n;
	char str[100];
	printf("Enter a string: ");
	gets(str);

	/*printf("\nBefore: ");
	printf("\nString length: %d",strlen(str));
	n=count_words(str);
	printf("\nNo of words: %d",n);*/

	printf("\nAfter: ");
	strcpy(str,remove_spaces(str));
	printf("\nString length: %d",strlen(str));
	n=count_words(str);
	printf("\nNo of words: %d",n);
	return 0;
}