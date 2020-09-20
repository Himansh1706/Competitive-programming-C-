#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertAtHead(node* &head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    else{
        node* n=new node(d);
        n->next=head;
        head=n;
        
    }

}
void insertAtEnd(node* &head,int d)
{
    if(head==NULL)
    {
        insertAtHead(head,d);
        return;
    }
    
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        node *n=new node(d);
        temp->next=n;
    
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
int length(node * head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertAtmiddle(node* &head,int d,int p)   // after p nodes
{
    if(p==0 || head==NULL)
    {
        insertAtHead(head,d);
        return;
    }
    else if(p>length(head))
    {
        insertAtEnd(head,d);
    }
    else
    {
        node* temp=head;
        while(p>1)
        {
            temp=temp->next;
            p--;
        }  
        node *n=new node(d);
        n->next=temp->next;
        temp->next=n;
        return;
    }
    
}
void reverse(node* &head)
{
    node* c=head;
    node* p=NULL;
    node* n=NULL;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}
node* recReverse(node* head)
{
    if(head->next==NULL or head==NULL)
    {
        return head;
    }
    node* shead=recReverse(head->next);
    node* temp=shead;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    head->next=NULL;
    return shead;
}
int kthelementfromend(node *head,int k)
{
    int n=length(head);
    int a=n-k;
    while(a>0)
    {
        head=head->next;
        a--;
    }
    return head->data;
}
int kthelementfromendoptimized(node *head,int k)
{
    node* f=head;
    while(k>0)
    {
        f=f->next;
        k--;
    }
    node* s=head;
    while(f!=NULL)
    {
f=f->next;
s=s->next;
    }
    return s->data;
}
int main()
{
    node* head=NULL;
    insertAtEnd(head,100);
    insertAtHead(head,90);
    insertAtHead(head,98);
    insertAtEnd(head,100);
    insertAtmiddle(head,1000,2);
    insertAtEnd(head,104);
    print(head);
    reverse(head);
    print(head);
    head=recReverse(head);
    print(head);
    cout<<kthelementfromend(head,4)<<endl;
    cout<<kthelementfromendoptimized(head,4)<<endl;
    return 0;
}