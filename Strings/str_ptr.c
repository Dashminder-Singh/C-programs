#include <stdio.h>
#include <string.h>


char * reverse(char *p)
{
	int l,i;
	char t;
	for(l=0; *(p+l)!='\0'; l++);
		for(i=0; i<l/2; i++)
		{
			t=*(p+i);
			*(p+i)=*(p+l-1-i);
			*(p+l-1-i)=t;
		}
		return p;
}

int length(char *p)
{
	int i;
	for( i=0; *(p+i)!='\0'; i++);
		return i;
}

int main()
{
	char s[20]="Computer";
	printf("%d",length(s));   // pass address
	char *str=reverse(s);
	printf("\n%s",str);
	//printf("\n%s",&str[0]);
	return 0;
}