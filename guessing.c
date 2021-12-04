#include <stdio.h>

int main()
{
	int secret_no, input_no;
	secret_no=89;

	printf("Guessing Game\n");
	printf("\nInput a number bw 1-100: ");
	scanf("%d",&input_no);

	while(input_no!= secret_no)
	{
		if(input_no>100)
		{
			printf("\nInvalid number\n");
			break;
		}
		else if(input_no < secret_no)
			printf("\nYour guess was too Low.\nInput a number bw 1-100: ");
		else
			printf("\nYour guess was too High.\nInput a number bw 1-100: ");
		scanf("%d",&input_no);	
	}
	if(input_no == secret_no)
		printf("\nCongratulations- You Won");
	return 0;
}