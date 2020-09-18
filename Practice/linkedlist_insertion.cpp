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

}