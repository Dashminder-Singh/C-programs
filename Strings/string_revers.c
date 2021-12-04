#include <stdio.h>
#include <string.h>

void reverse(char s[],int n)
{
	int temp;
	for(int i=0; i<n/2; i++)
	{
		temp=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=temp;
	}
}

int main()
{
	char str[100],res[100]="", word[50];
	printf("Enter a string: ");
	gets(str);
	printf("Original string: %s",str);
	
	strrev(str); // orginal reverse
	strcat(str," ");

	int i=0,j=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			word[j]='\0';
			int a=strlen(word);
			reverse(word,a);   //reverse word string
			strcat(res,word);
			strcat(res," ");
			j=0;
		}
		else
		{
			word[j]=str[i];
			j++;
		}
		i++;
	}
	
	printf("\nReverse string: %s",res);
	return 0;
}