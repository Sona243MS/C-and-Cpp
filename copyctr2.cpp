#include<iostream>
using namespace std;
class Student
{
    private:
    int marks;
    public:
    Student(int m)
    {
        marks=m;
    }
    //copy constructor
Student(Student &s)
{
    marks=s.marks;
    cout<<"Marks"<<marks<<endl;
}
void updateMarks(int m)
{
    marks=m;
}
};
int main()
{
    Student s1(85);
    Student s2=s1;
    s2.updateMarks(95);
    cout<<"s1=";
     s1.show();
    cout<<"s2=";
    s2.show;
    return 0;
}


