#include<iostream>
#include<string>
using namespace std;
class Book
{
	private:
		String title;
		int pages;
	public:
		Book(string t,int p)
		{
			title=t;
			pages=p;
		}
//copy constructor
Book(Book &other)
{
	title=other.title;
	pages=other.pages;
}


