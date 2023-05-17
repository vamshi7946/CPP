#include<iostream>
#include<stdlib.h>
#define max 5
using namespace std;
class Stack
{
    int top,arr[max];
    public:
        Stack()
        {
            top=-1;
        }
        void push(int x)
        {
            if(top>=max-1)
                cout<<"Stack Overflow.";
            else
            {
                arr[++top]=x;
                cout<<x<<" is pushed into stack";
            }
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Stack UnderFlow.";
            }
            else
            {
                cout<<arr[top]<<" is popped from stack.";
                top--;
            }
        }
        bool isFull()
        {
            if(top<max-1)
                return true;
            return false;
        }
        bool isEmpty()
        {
            if(top==-1)
                return true;
            return false;
        }
        void peek()
        {
            cout<<arr[top]<<" is peek element.";
        }
        void display()
        {
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
};
main()
{
    int n,ele;
    Stack s;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Select an option: ";
        cout<<"\n 1.Push 2.Pop 3.isEmpty 4.isFull 5.Peek 6.Display 7.Exit\n";
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"Enter element to push:";
                cin>>ele;
                s.push(ele);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout<<s.isEmpty();
                break;
            case 4:
                cout<<s.isFull();
                break;
            case 5:
                s.peek();
                break;
            case 6:
                s.display();
                break;
            case 7:
                exit(0);
                break;
            default:
                cout<<"\nInvalid option.";
        }
        cout<<"Do you want to continue(y/n): ";
        cin>>ch;
    }
}