//Copy Constructor Program
#include<iostream>
using namespace std;
class Wall
{
	private:
		int length;
		int height;
	public:
		Wall(int len,int hei)
		{
			length=len;
			height=hei;
		}
		//copy constructor
		Wall(Wall &obj)
		{
			length=obj.length;
			height=obj.height;
		}
		double calculateArea()
		{
			return length*height;
		}
		int main()
		{
			Wall wall1(22,20);
			Wall wall2=wall1;
			cout<<"Area of wall1:"<<wall1.calculateArea()<<endl;
			cout<<"Area of wall2(Copy of wall1):"<<wall2.calculateArea()<<endl;
			return 0;
		}



