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
void insertAtEnd(int* &head,int d)
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
int main()
{
    node* head=NULL;
    insertAtHead(head,90);
    print(head);
    insertAtHead(head,98);

    insertAtEnd(head,100);
    print(head);

}