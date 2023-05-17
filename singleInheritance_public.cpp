#include<iostream>
using namespace std;
class Base
{
    private:int a;
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
class child:public Base
{
    private: int c;
    public:
        int mut()
        {
            c=geta()*b;
            return c;
        }
        void display()
        {
            cout<<" a value is : "<<geta()<<endl;
            cout<<" b value is : "<<b<<endl;
            cout<<" c value is: "<<mut();
        }
};
main()
{
    child c;
    c.getab();
    c.mut();
    c.display();
}