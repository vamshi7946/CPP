#include<iostream>
using namespace std;
class Base
{   public:
    void display()
    {
        cout<<"\nBase class display method.";
    }
    void show()
    {
        cout<<"\nBase class show function.";
    }
};
class Child:public Base
{
    public:
    void display()
    {
        cout<<"\nChild class display method.";
    }
    void show()
    {
        cout<<"\nchild class show function.";
    }
};
main()
{
    Base b;
    Child c;
    Base *bptr;
    Child *cptr;
    bptr=&b;
    bptr->display();
    bptr->show();
    bptr=&c;
    bptr->display();
    bptr->show();
}