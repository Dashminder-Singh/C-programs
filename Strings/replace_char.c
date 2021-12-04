#include <stdio.h>
#include <string.h>

void replace(char s[], char ch1, char ch2, int len)
{
	for(int i=0; i<len; i++)
	{
		if(s[i]== ch1)
		{
			s[i]=ch2;
		}
		else if(s[i]== ch2){
			s[i]=ch1;
		}
	}
	printf("%s ",s);
}

int main()
{
	char str[50];
	char a,b;
	printf("Enter string, char 1 and 2: ");
	scanf("%s %c %c",str,&a,&b);
	int l=strlen(str);
	
	replace(str,a,b,l);
	return 0;
}