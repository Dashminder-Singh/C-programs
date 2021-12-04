// count the number of occurence in a given char of string

#include <iostream>
using namespace std;

int occur(char s[], char c)
{
	int i=0, count=0;
	while(s[i]!='\0')
	{
		if(s[i]==c)
		{
			count++;
		}
		i++;
	}
	return count;
}
	/* char *ptr = st;
	while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }	
    */
int main()
{
	char s[]="aabacde";
	int count=occur(s,'a');   // count the number of 2's
	cout<<"Occurences = "<<count;
	return 0;
}