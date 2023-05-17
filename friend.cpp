#include<iostream>
using namespace std;
class Sample
{
    private:
        int a,b;
    public:
        void setValue()
        {
            cout<<"Enter a and b values:";
            cin>>a>>b;
        }
        friend double mean(Sample s);
};
double mean(Sample s)
{
    return double(s.a+s.b)/2;
}
main()
{
    Sample x;
    x.setValue();
    cout<<"The avarage of two no.s is:"<<mean(x);
}