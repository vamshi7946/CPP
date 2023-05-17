#include<iostream>
using namespace std;
class Space
{
    int x,y,z;
    public:
        void getData(int a,int b, int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void display()
        {
            cout<<"\nx= "<<x;
            cout<<"\ny= "<<y;
            cout<<"\nz= "<<z;
        }
        void operator-()
        {
            x=-x;
            y=-y;
            z=-z;
        }
};
main()
{
    Space s;
    s.getData(1,2,3);
    s.display();
    -s;
    cout<<"\n-s";
    s.display();
}