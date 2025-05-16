#include<iostream>
using namespace std;
void area(int r)
{
	cout<<"Area of circle="<<3.14*r*r<<endl;
}
void area(int len, int br)
{
	cout<<"Area of rectangle="<<len*br<<endl;
}
void area(int b,int h)
{
	cout<<"Area of a triangle="<<0.5*b*h<<endl;
}
int main()
{
	int ra,l,b,base,hei;
	cout<<"Enter radius of a Circle:";
	cin>>ra;
	cout<<"Enter length and breadth of a rectangle:";
	cin>>l>>b;
	cout<<"Enter base and height of a triangle:";
	cin>>base>>hei;
