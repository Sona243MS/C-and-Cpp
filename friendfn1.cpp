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
`
