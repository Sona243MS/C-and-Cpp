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

