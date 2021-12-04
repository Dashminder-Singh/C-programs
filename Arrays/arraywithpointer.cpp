#include <iostream>
using namespace std;

int main()
{
	int marks[4];
	int *p;
	//p=&marks[0];
	p=marks;
	for(int i=0; i<4; i++)
	{
		cout<<"Enter the value of marks for student: "<<i+1<<endl;
		cin>>p[i];
	}
	cout<<endl;
	for(int i=0; i<4; i++)
	{
		/*cout<<"The value 
		of marks for student is "<<i+1<<" = "<<p[i]<<endl;*/
		cout<<"The value of marks for student is "
		<<i+1<<" = "<<*(p+i)<<endl;
	}
	return 0;
}