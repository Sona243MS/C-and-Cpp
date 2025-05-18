#include<iostream>
using namespace std;
void maximum(int a,int b)
{
	int gr=(a>b)?a:b;
	cout<<gr<<"is maximum";
}
void maximum(int a,int b,int c)
{
	int gr=(a>b&&a>c)?a:(b>c&&b>a)?b:c;
	cout<<gr<<"is maximum";
}

int main()
{
	int a,b,c;
	cout<<"Enter three numbers";
	cin>>a>>b>>c;
	maximum(a,b);
	maximum(a,b,c);
	return 0;
}


