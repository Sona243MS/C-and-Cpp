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
`
