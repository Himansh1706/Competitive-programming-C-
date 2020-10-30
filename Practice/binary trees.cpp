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
node* build_tree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root=new node(d);
    root->left=build_tree();
    root->right=build_tree();
    return root;
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
void preorder(node* root)
{
 if(root==NULL)
    {
        
        return;
    }
    cout<<root->data<<" - ";
    inorder(root->left);
    inorder(root->right);   
}
void postorder(node* root)
{
 if(root==NULL)
    {
        
        return;
    }
   
    inorder(root->left);
    inorder(root->right);
     cout<<root->data<<" - ";   
}
void bfs(node* root)
{
    queue<node* > q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<temp->data;
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
int noofnode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+noofnode(root->left)+noofnode(root->right);
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int diameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    int op1=h1+h2;
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));
}
class Pair
{
    public:
    int di;
    int height;
    Pair()
    {
        height=0;
        di=0;
    }
};
Pair fastdiameter(node* root)
{
    Pair ans;
    if(root==NULL)
    {
        ans.di=0;
        ans.height=0;
        return ans;
    }
    Pair ll=fastdiameter(root->left);
    Pair rr=fastdiameter(root->right);
    ans.height=max(ll.height,rr.height)+1;
    ans.di=max(ll.height+rr.height,max(ll.di,rr.di));
    return ans;
}
node* treefromarray(int *arr,int s,int e)
{
if(s>e)
{
    return NULL;
}
int mid=(s+e)/2;
node* root=new node(arr[mid]);
root->left=treefromarray(arr,s,mid-1);
root->right=treefromarray(arr,mid+1,e);
return root;

}
void printRightView(node* root,int level,int& maxlevel)
{
    if(root==NULL)
    {
        return;
    }
    if(level>maxlevel)
    {
        cout<<root->data<<" - ";
        maxlevel=level;
    }
    printRightView(root->right,level+1,maxlevel);
    printRightView(root->left,level+1,maxlevel);

}
int replacesun(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    int ll=replacesun(root->left);
    int rr=replacesun(root->right);
    int temp=root->data;
    root->data=ll+rr;
    return root->data+temp;

}
int main()
{
node* root=build_tree();
bfs1(root);
cout<<endl;
inorder(root);
cout<<endl;
preorder(root);
cout<<endl;
cout<<noofnode(root)<<endl;
cout<<height(root)<<endl;
cout<<diameter(root)<<endl;
Pair ans;
ans=fastdiameter(root);
cout<<"FAST"<<" Height - "<<ans.height<<" Diameter - "<<ans.di<<endl;
cout<<endl;
int a=-1;
printRightView(root,0,a);
cout<<endl;
return 0;
}