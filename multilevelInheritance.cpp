#include<iostream>
using namespace std;
class Student
{
    protected:
        int rollno;
        char name[20];
    public:
        void getDetails()
        {
            cout<<"Enter name and rollno: ";
            cin>>name>>rollno;
        }
        void putDetails()
        {
            cout<<"RollNo: "<<rollno<<"\nName: "<<name;
        }
};
class  Marks:public Student
{
    protected:
        float s1,s2;
    public:
        void getMarks()
        {
            cout<<"Enter marks of sub1 and sub2:";
            cin>>s1>>s2;
        }
        void putMarks()
        {
            cout<<"\nThe two subject marks are: "<<s1<<" "<<s2;
        }
};
class Test:public Marks
{
    private:
        float tot;
    public:
        void result()
        {
            tot=s1+s2;
        }
        void display()
        {
            cout<<"\nThe result: "<<tot;
        }
};
main()
{
    Test t;
    t.getDetails();
    t.getMarks();
    t.putDetails();
    t.putMarks();
    t.result();
    t.display();
}