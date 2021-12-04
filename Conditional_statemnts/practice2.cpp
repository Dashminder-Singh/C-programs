#include <iostream>
using namespace std;

int main()
{
	int physics, chemistry, maths;
	float total;
	cout<<"Enter physics marks: ";
	cin>>physics;
	cout<<"\nEnter chemistry marks: ";
	cin>>physics;
	cout<<"\nEnter maths marks: ";
	cin>>physics;

	total=(physics+chemistry+maths)/3;
	if((total<40) || physics<33 || chemistry<33 || maths<33)
		cout<<"Your total %= "<<total<<" and you are fail";
	else
		cout<<"Your total %= "<<total<<" and you are Pass";
	return 0;
}