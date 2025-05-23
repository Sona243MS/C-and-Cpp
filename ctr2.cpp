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

