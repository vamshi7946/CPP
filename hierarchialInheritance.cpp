#include<iostream>
using namespace std;
class Base
{
    private:
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
            cout<<"Student name and rollno are : "<<name<<" "<<rollno;
        }
};
class child1:public Base
{
    private:
        float s1,s2,s3;
    public:
        void getMarks()
        {
            cout<<"Enter three subject mars : ";
            cin>>s1>>s2>>s3;
        }
        void putMarks()
        {
            cout<<"\nThree subject marks are: "<<s1<<" "<<s2<<" "<<s3<<endl;
        }
};
class child2:public Base
{
    private:
        float score;
    public:
        void getScore()
        {
            cout<<"Enter sports score: ";
            cin>>score;
        }
        void putScore()
        {
            cout<<"Sports score is : "<<score;
        }
};
main()
{
    child1 ch1;
    child2 ch2;
    ch1.getDetails();
    ch1.getMarks();
    ch2.getScore();
    ch1.putDetails();
    ch1.putMarks();
    ch2.putDetails();
    ch2.putScore();
}