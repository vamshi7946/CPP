#include<iostream>
using namespace std;
class Area
{
    protected:
        float s;
    public:
        void getData()
        {
            
            cout<<"Enter Dimension: \n";
            cin>>s;
        }
        virtual float area()=0;

};
class Square:public Area
{
    public:
        float area()
        {
            return s*s;
        }
};
class Circle:public Area
{
    public:
        float area()
        {
            return 3.14*s*s;
        }
};
main()
{
    Square s;
    s.getData();
    cout<<"Area of square is : "<<s.area()<<endl;
    Circle c;
    c.getData();
    cout<<"Area of circle is : "<<c.area();
}