#include <stdio.h>
#include <string.h>

int main()
{
	char str[50], v[]="aeiouAEIOU";
	printf("Enter a string: ");
	gets(str);

	int count=0;
	for(int i=0; str[i]!='\0'; i++)
	{
		for (int j=0; v[j]!='\0'; j++)
		{
			if(str[i]==v[j])
			{
				count++;
				break;
			}
		}
	}
	printf("Total no. of vowels in %s is : %d",str,count);
	return 0;
}