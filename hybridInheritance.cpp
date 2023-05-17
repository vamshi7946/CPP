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
            cout<<"Enter name and rollno : ";
            cin>>name>>rollno;
        }
        void putDetails()
        {
            cout<<"Name : "<<name<<"\nRoll No : "<<rollno;
        }
};
class Marks: public Student
{
    protected:
        float s1,s2;
    public:
        void getMarks()
        {
            cout<<"Enter 2 subject marks: ";
            cin>>s1>>s2;
        }
        void putMarks()
        {
            cout<<"\nStudent marks are : "<<s1<<" "<<s2;
        }
};
class Sports
{
    protected:
        float score;
    public:
        void getScore()
        {
            cout<<"Enter sports score : ";
            cin>>score;
        }
        void putScore()
        {
            cout<<"Sports score is : "<<score;
        }
};
class Result: public Marks, public Sports
{
    private:
        float res;
    public:
        void result()
        {
            cout<<"\nResult of marks : "<<s1+s2;
            cout<<"\nSports score is : "<<score;
        }
};
main()
{
    Result r;
    r.getDetails();
    r.getMarks();
    r.getScore();
    r.putDetails();
    r.putMarks();
    r.result();
}