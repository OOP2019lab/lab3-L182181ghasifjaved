#include<iostream>
#include"l182181_Q2.h"
using namespace std;
int rectangle::getlength()
{
	return length;
}
void rectangle::setlength(int l)
{
	if(l<0)
	{
		length=0;
	}
	else
		length=l;
}
int rectangle::getwidth()
{
	return width;
}
void rectangle::setwidth(int w)
{
	if(w<0)
		width=0;
	else
		width=w;
}
int rectangle::getarea()
{
	return length*width;
}
void rectangle::rotaterectangle()
{
	int temp=length;
	length=width;
	width=temp;
}
void rectangle::draw()
{
	cout<<endl;
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}