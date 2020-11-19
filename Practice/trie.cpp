#include<iostream>
#include<unordered_map>
using namespace std;
class node
{
public:
    char data;
    unordered_map<char,node*> children;
    bool terminal;
    node(char c)
    {
        data=c;
        terminal=false;
    }
};
class trie
{
    public:
    node* root;
    int cnt;
    trie()
    {
        root=new node('\0');
        cnt=0;
    }
    void insert(char *w)
    {
        node* temp=root;
        for(int i=0;w[i]!='\0';i++)
        {
            char ch=w[i];
            if(temp->children.count(ch))
            {
                temp=temp->children[ch];
            }
            else
            {
                node* n=new node(ch);
                temp->children[ch]=n;
                temp=n;
            }
        }
        temp->terminal=true;
    }
    bool find(char* w)
    {
        node* temp=root;
        for(int i=0;w[i]!='\0';i++)
        {
            char ch=w[i];
            if(!temp->children.count(ch))
            {
                return false;
            }
            temp=temp->children[ch];
        }
        return temp->terminal;
    }

};
int main()
{
    trie t;
    char words[][6]={"a","hello","not","news","apple"};
    for(int i=0;i<5;i++)
    {
        t.insert(words[i]);
    }
    char w[10];
    cin>>w;
    if(t.find(w))
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Absent";
    }
}
