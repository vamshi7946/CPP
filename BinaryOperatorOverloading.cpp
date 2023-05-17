#include<iostream>
using namespace std;
class Complex
{
    float real,img;
    public:
        Complex()
        {

        }
        Complex(float a, float b)
        {
            real=a;
            img=b;
        }
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }
        void display()
        {
            cout<<real<<"+i"<<img<<endl;
        }
};
main()
{
    Complex c1,c2,c3;
    c1=Complex(1.2,2.5);
    c2=Complex(2.2,3.4);
    c3=c1+c2;
    cout<<"c1= ";
    c1.display();
    cout<<"c2= ";
    c2.display();
    cout<<"c3= ";
    c3.display();
}