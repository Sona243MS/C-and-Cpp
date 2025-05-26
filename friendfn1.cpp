i#include<iostream>
using namespace std;
class Box
{
private:
    int length,width;
    public:
    Box(int l,int w)
    {
        length=l;
        width=w;
    }
    friend void calculateArea(Box b1)
};
void calculateArea(Box b1)
{
    int area=b1.length*b1.width;
    cout<<"Area:"<<area;
}
int main()
{
    int a,b;
    cout<<"Enter length and width=";
    cin>>a>>b;
    Box b2(a,b);
    calculateArea(b2);
    return 0;
}

`
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
friendfn1.cpp [unix] (12:49 26/05/2025)                                                                                                                                                 20,1 All
-- INSERT --
`
