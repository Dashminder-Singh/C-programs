#include <stdio.h>
#include <string.h>

int main()
{
	char text[50], result[50];

	printf("Enter some text:\n");
	gets(text);

	int i=0,j=0;
	while(text[i]!='\0')
	{
		if(!(text[i]==' ' && text[i+1]==' '))
		{
			result[j]=text[i];
			j++;
		}
		i++;
	}
	result[j]='\0';

	printf("Aftre remove spaces:\n");
	puts(result);
	//printf("After remove spaces:\n%s",result);
	return 0;
}