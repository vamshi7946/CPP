#include<iostream>
using namespace std;
class Base1
{
    protected:
        int a;
    public:
        void geta()
        {
            cout<<"Enter a value: ";
            cin>>a;
        }
        void puta()
        {
            cout<<"a value is : "<<a;
        }
};
class Base2
{
    protected:
        int b;
    public:
        void getb()
        {
            cout<<"Enter b value: ";
            cin>>b;
        }
        void putb()
        {
            cout<<"\nb value is : "<<b;
        }
};
class child:public Base1,public Base2
{
    private:
        int c;
    public:
        void mult()
        {
            geta();
            getb();
            c=a*b;
        }
        void display()
        {
            cout<<"\nMultiplication of a and b is : "<<c;
        }
};
main()
{
    child c;
    c.mult();
    c.puta();
    c.putb();
    c.display();
}