#include <stdio.h>
#include <string.h>

int indexofsubstring(char str[],char s[]);
int main()
{
	int index;
	char s1[]="abababbbaabbababbbaa";
	char s2[]="aabb";  //baba at index start 1
	index=indexofsubstring(s1,s2);
	if(index==-1)
	{
		printf("Substring not found");
	}
	else
	{
		printf("Substring found at %d index",index);
	}
	return 0;
}

int indexofsubstring(char str[], char s[])
{
	int k,l,j;
	l=strlen(s);
	for(int i=0; str[i+l-1]; i++)
	{
		k=i;
		for(j=0; j<=l-1; j++)
		{
			if(str[k]!= s[j])
				break;
			k++;
		}
		if(j==l)
			return i;  // substring found at index
	}
	return -1; // substring not found
}