#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    private:
        int a;
    public:
        void setValue(int x)
        {
            a=x;
        }
        friend void max(ABC,XYZ);
};
class XYZ
{
    private:
        int b;
    public:
        void setValue(int y)
        {
            b=y;
        }
        friend void max(ABC,XYZ);
};
void max(ABC m, XYZ n)
{
    if(m.a>n.b)
    {
        cout<<"Greater is "<<m.a;
    }
    else
    {
        cout<<"Greater is "<<n.b;
    }
}
main()
{
    XYZ xyz;
    ABC abc;
    abc.setValue(5);
    xyz.setValue(7);
    max(abc,xyz);

}