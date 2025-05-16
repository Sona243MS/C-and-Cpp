#include<iostream>
using namespae std;
void sum(int a,int b)
{
	cout<<"Sum of two integers="<<a+b<<endl;
}
void sum(int a,b,c)
{
	cout<<"Sum of three integers(Function Overloading)="<<a+b+c<<endl;
}
int main()
{
	int a,b,c;
	cout<<"Enter three integers=";
	cin>>a>>b>>c;
	sum(a,b);
	sum(a,b,c);
	return 0;
}


