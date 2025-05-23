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
void display()
{
	cout<<"Tile:"<<title<<"\nPages:"<<pages<<endl;
}
int main()
{
	Book book1("Harry Potter",200);
	Book book2=book1;
	cout<<"Book1 Details:"<<endl;



