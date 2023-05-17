#include<iostream>
using namespace std;
class LinkedList
{
    struct node
    {
        int data;
        node *ptr;
    }*p;
    public:
        LinkedList()
        {
            p=NULL;
        }
        void insBeg(int x)
        {
            node *q;
            q=new node;
            q->data=x;
            q->ptr=p;
            p=q;
        }
        void insEnd(int x)
        {
            node *q,*r;
            if(p==NULL)
            {
                p=new node;
                p->data=x;
                p->ptr=NULL;
            }
            else{
                q=p;
                while(q->ptr!=NULL)
                {
                    q=q->ptr;
                }
                r=new node;
                r->data=x;
                r->ptr=NULL;
                q->ptr=r;
            }
        }
        void insAfter(int x,int z)
        {
            node *q,*r;
            q=p;
            while(q!=NULL)
            {
                if(q->data==z)
                {
                    r=new node;
                    r->data=x;
                    r->ptr=q->ptr;
                    q->ptr=r;
                    q=NULL;
                }
                else{
                    q=q->ptr;
                }
            }
        }
        void insByPos(int x, int c)
        {
            node *q,*r;
            q=p;
            for(int i=1;i<c;i++)
            {
                q=q->ptr;
                if(q==NULL)
                {
                    cout<<"Less Position";
                    exit(0);
                }
            }
            r=new node;
            r->data=x;
            r->ptr=q->ptr;
            q->ptr=r;
        }
        void deleteBegin()
        {
            node *q;
            if(p==NULL)
            {
                cout<<"\nlist is empty";
            }
            else{
                q=p;
                p=p->ptr;
                cout<<"\n The deleted element is: "<<q->data;
                delete q;
            }
        }
        void deleteEnd()
        {
            node *q,*r;
            q=p;
            if(p==NULL)
            {
                cout<<"\nList is empty";
            }
            else
            {
                while(q!=NULL)
                {
                    if((q->ptr)->ptr==NULL)
                    {
                        r=q->ptr;
                        cout<<"\n The deleted element is : "<<r->data;
                        delete r;
                        q->ptr=NULL;
                        q=NULL;
                    }
                    else{
                        q=q->ptr;
                    }
                }
            }
        }
        void deleteMid(int z)
        {
            node *q,*r;
            q=p;
            if(p==NULL)
            {
                cout<<"\nList is empty";
            }
            else{
                if(q->data==z)
                {
                    p=p->ptr;
                    cout<<"\nThe deleted elements is : "<<q->data;
                    delete q;
                }
                else{
                    while(q!=NULL)
                    {
                        if(q->data==z)
                        {
                            r->ptr=q->ptr;
                            cout<<"\nThe deleted element is : "<<q->data;
                            delete q;
                            q=NULL;
                        }
                        else{
                            r=q;
                            q=q->ptr;
                        }
                    }
                }
            }
        }
        void display()
        {
            node *q;
            if(p==NULL)
            {
                cout<<"\nList is empty.";
            }
            else{
                cout<<"\nThe element of the list are: ";
                q=p;
                while(q!=NULL)
                {
                    cout<<"\nThe element is: "<<q->data;
                    q=q->ptr;
                }
            }
        }
};
main()
{
    LinkedList l;
    int x,ch,z;
    char choice='y';
    while(choice=='y' || choice=='Y')
    {
        cout<<"\n1.InsertBegin\n2.InsertEnd\n3.InsertAfter\n4.InsertByPOs\n5.DeleteBegin\n6.DeleteEnd\n7.DeleteMiddle\n8.Display\n9.Exit";
        cout<<"\nEnter u r choice:";
        cin>>ch;
        switch (ch)
        
        {
        case 1:
            cout<<"Enter element to insert: ";
            cin>>x;
            l.insBeg(x);
            break;
        case 2:
            cout<<"Enter element to insert: ";
            cin>>x;
            l.insEnd(x);
            break;
        case 3:
            cout<<"Enter element to insert: ";
            cin>>x;
            cout<<"Enter z value: ";
            cin>>z;
            l.insAfter(x,z);
            break;
        case 4:
            cout<<"Enter element to insert: ";
            cin>>x;
            cout<<"Enter z value: ";
            cin>>z;
            l.insByPos(x,z);
            break;
        case 5:
            cout<<"Delete at begin:";
            l.deleteBegin();
            break;
        case 6:
            cout<<"Delete at end:";
            l.deleteEnd();
            break;
        case 7:
            cout<<"Delete at middle:";
            cout<<"Enter z value: ";
            cin>>z; 
            l.deleteMid(z);
            break;
        case 8:
            l.display();
            break;
        case 9:
            exit(0);
        default:
            cout<<"Invalid option";
        }
        cout<<"Do u want to continue : [y/n]";
        cin>>choice;
    }
}