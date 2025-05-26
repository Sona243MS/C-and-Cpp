#include<iostream>
using namespace std;
class Rectangle;
class Circle;
class Rectangle
{
private:
    int length,width;
public:
    Rectangle(int l,int w)
    {
        length=l;
        width=w;
    }
    friend void comparearea(Rectangle r,Circle c);
};

