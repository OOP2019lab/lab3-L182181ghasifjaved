#include<iostream>
using namespace std;
class rectangle
{
private:
	int length;
	int width;
public:
	int getwidth();
	int getlength();
	void setlength(int lengt);
	void setwidth(int widt);
	int getarea();
	void rotaterectangle();
	void draw();
};