#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a chacater: ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u': 
		printf("%c is a Vowel",ch);
		break;
		default:
		printf("%c is not Vowel",ch);
	}
	return 0;
}