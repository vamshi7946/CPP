#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    public:
        int b;
        void getab()
        {
            cout<<"Enter a and b values:";
            cin>>a>>b;
        }
        int geta()
        {
            return a;
        }
};
class derived :private Base
{
    private:
        int c;
    public:
        void mult()
        {
            getab();
            c=geta()*b;
        }
        void display()
        {
            cout<<"the value of a is:"<<geta();
            cout<<"\nthe value of b is :"<<b;
            cout<<"\nthe value of c is: "<<c;
        }
};
main()
{
    derived d;
    d.mult();
    d.display();
}