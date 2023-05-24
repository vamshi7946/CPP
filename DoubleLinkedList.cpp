#include<iostream>
#include<stdlib.h>
using namespace std;
class DLinkedList
{
    struct node
    {
        node *prev;
        int data;
        node *next;
    }*p;
    public:
        DLinkedList()
        {
            p=NULL;
        }
        void insBegin(int x)
        {
            if(p==NULL)
            {
                p=new node;
                p->data=x;
                p->prev=NULL;
                p->next=NULL;
            }
            else
            {
                node *q;
                q=new node;
                q->data=x;
                q->prev=NULL;
                q->next=p;
                p->prev=q;
                p=q;
            }
        }
        void insEnd(int x)
        {
            if(p==NULL)
            {
                p=new node;
                p->data=x;
                p->prev=NULL;
                p->next=NULL; 
            }
            else
            {
                node *q,*r;
                q=p;
                while(q->next!=NULL)
                {
                    q=q->next;
                }
                r=new node;
                r->data=x;
                r->prev=q;
                r->next=NULL;
                q->next=r;
            }
        }
        void insAfter(int x, int z)
        {
            if(p==NULL)
            {
                cout<<"\nlist is empty";
            }
            else
            {
                node *q,*r;
                q=p;
                while(q!=NULL)
                {
                    if(q->data==z)
                    {
                        r=new node;
                        r->data=x;
                        r->prev=q;
                        r->next=q->next;
                        if (r->next != NULL)
                            r->next->prev=r;
                        q->next=r;
                        return;
                    }
                    else
                    {
                        q=q->next;
                    }
                }
            }

        }
        void insByPos(int x, int pos)
        {
            node *q,*r;
            q=p;
            int count=1;
            while(q->next!=NULL)
            {
                if(count==pos)
                {
                    r=new node;
                    r->data=x;
                    r->next=q->next;
                    r->prev=q;
                    q->next=r;
                    break;
                }
                count++;
                q=q->next;
            }
            if(q->next==NULL)
            {
                cout<<"\nLess positions.";
            }
        }
        void delBegin()
        {
            if(p==NULL)
            {
                cout<<"\n list is empty";
            }
            else
            {
                node *q;
                q=p;
                cout<<q->data<<" is deleted\n";
                p=q->next;
                p->prev=NULL;
                q->next=NULL;
                delete q;
            }
        }
        void delEnd()
        {
            if(p==NULL)
            {
                cout<<"\n list is empty";
            }
            else
            {
                node *q;
                q=p;
                while(q->next!=NULL)
                {
                    q=q->next;
                }
                cout<<q->data<<" is deleted\n";
                q->prev->next=NULL;
                q->prev=NULL;
                delete q;
            }
        }
        void delElement(int z)
        {
            if(p==NULL)
            {
                cout<<"\nList is empty";
            }
            else
            {
                node *q;
                q=p;
                while(q->next!=NULL)
                {
                    if(q->data==z)
                    {
                        cout<<q->data<<" is deleted\n";
                        q->prev->next=q->next;
                        q->next->prev=q->prev;
                        delete q;
                        break;
                    }
                    else
                    {
                        q=q->next;
                    }
                }
                if(q->next==NULL)
                {
                    cout<<"\nElement not found.";
                }
            }
        }
        void display()
        {
            node *q;
            q=p;
            while(q->next!=NULL)
            {
                cout<<q->data<<endl;
                q=q->next;
            }
            cout<<q->data;
        }
};
main()
{
    DLinkedList l ;
    char ch='y';
    int x,pos,ele,choice,aftele;
    while(ch=='y'||ch=='Y')
    {
        cout<<"\nEnter your choice: ";
        cout<<"\n1.InsertBegin\n2.InsertEnd\n3.InsertAfter\n4.InsertByPosition\n5.DeleteBegin\n6.DeleteEnd\n7.DeleteElement\n8.Display\n9.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"\nEnter element to insert at begin : \n";
                    cin>>ele;
                    l.insBegin(ele);
                    break;
            case 2: cout<<"\nEnter element to insert at end : \n";
                    cin>>ele;
                    l.insEnd(ele);
                    break;
            case 3: cout<<"\nEnter element to insert and the element after you want to insert : \n";
                    cin>>ele;
                    cin>>aftele;
                    l.insAfter(ele,aftele);
                    break;
            case 4: cout<<"\nEnter element and position to insert : \n";
                    cin>>ele;
                    cin>>pos;
                    l.insByPos(ele,pos);
                    break;
            case 5: l.delBegin();
                    break;
            case 6: l.delEnd();
                    break;
            case 7: cout<<"\nEnter element to delete:";
                    cin>>ele;
                    l.delElement(ele);
                    break;
            case 8: cout<<"\nList elements are : \n";
                    l.display();
                    break;
            case 9: exit(0);
                    break;
            default: cout<<"\nInvalid choice.";
        }
        cout<<"Do u want to continue[y/n]:";
        cin>>ch;
    }
}