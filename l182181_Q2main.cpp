#include <iostream>
#include "l182181_Q2.h"
using namespace std;
int main()
{
	int area=0;
	int l,w;
	rectangle R;
	cout<<"enter the length of rectangle";
	cin>>l;
	cout<<"enter the width of rectangle";
	cin>>w;
	R.setlength(l);
	R.setwidth(w);
	area=R.getarea();
	cout<<"Area: "<<area;
	char y='\0';
	cout<<"\nDo u want to rotate the rectangle? (y/n)";
	cin>>y;
	if(y=='y'||y=='Y')
	R.rotaterectangle();
	R.draw();
	system ("pause");
	return 0;
}