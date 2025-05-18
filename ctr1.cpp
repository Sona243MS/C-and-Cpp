#include<iostream>
using namespace std;
class student()
{
	char name[10];
	int rno;
	double fee;
public:
	student();
	void display()
	{
		cout<<name<<"\t"<<rno<<"\t"<<fee<<"\t"<<endl;
	}
};
student::student()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter roll no:";
            cin>>rno;
            cout<<"Enter fee:";
            cin>>fee;
        }
int main()
{
    student s1;
    s1.display();
}


