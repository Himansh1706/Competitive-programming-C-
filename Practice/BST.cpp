#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* insertatbst(node* root,int d)
{
    if(root==NULL)
    {
        return new node(d);
    }
    if(d<root->data)
    {
        root->left=insertatbst(root->left,d);
    }
    else
    {
        root->right=insertatbst(root->right,d);
    }
    return root;
}
node* buildtree()
{
    int d;
    cin>>d;
    node* root=NULL;
    while(d!=-1)
    {
        root=insertatbst(root,d);
        cin>>d;
    }
    return root;
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void print(node* root)
{
    queue<node* > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* a=q.front();
        q.pop();
        if(a==NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
            }
        cout<<"\n";
        }
        else
        {
        cout<<a->data<<",";

        if(a->left)
        {
            q.push(a->left);
        }
        if(a->right)
        {
            q.push(a->right);
        }
        }
    }

}
int main()
{

    node* root=buildtree();
    inorder(root);

    return 0;
}
