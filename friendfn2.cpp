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
class Circle
{
private:
    int radius;
public:
    Circle(int rad)
    {
        radius=rad;
    }
    friend void comparearea(Rectangle r,Circle c);
};
void comparearea(Rectangle r,Circle c)
{
    int ar=r.length*r.width;
    int ac=3.14*c.radius*c.radius;
    cout<<"Area of rectangle="<<ar<<endl;
    cout<<"Area of circle="<<ac<<endl;
    if(ar>ac)
    {
        cout<<"Rectangle area is bigger than circle area";
    }
    else if(ac>ar)
        {
            cout<<"Circle area is bigger than rectangle area";
        }
        else
        {
            cout<<"Area of rectangle and circle is equal";
        }
    }

int main()
{
    int le,br,ra;
    cout<<"Enter length and width of rectangle=";
    cin>>le>>br;
    cout<<"Enter radius of circle";
    cin>>ra;
    Rectangle r1(le,br);
    Circle c1(ra);
    comparearea(r1,c1);
    return 0;
}



