#include <iostream>
using namespace std;

int main()
{
	int a=10, *p=&a;

	char ch='A', &cho=ch;

							//cho+=a;   *p=85, ch=75='K'
	ch=ch+a;
	*p=*p+ch;
							//*p+=ch;
							
	cout<<*p<<", "<<ch<<endl;
	return 0;
}