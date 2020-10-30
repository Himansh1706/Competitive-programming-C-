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
        right=NULL;
        left=NULL;
    }
};
node* insertdata(node* root,int data)
{
    if(root==NULL)
    {
        return new node(data);
    }
    if(data>root->data)
    {
        root->right=insertdata(root->right,data);
    }
    else{
        root->left=insertdata(root->left,data);

    }
    return root;
}

void bfs1(node* root)
{
    queue<node* > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    }
}
void inorder(node* root)
{
    if(root==NULL)
    {
        
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" - ";
    inorder(root->right);
}
int main()
{
    node* root=NULL;
    int d;
    cin>>d;
    while(d!=-1)
    {
        root=insertdata(root,d);
        cin>>d;
    }
    inorder(root);
}