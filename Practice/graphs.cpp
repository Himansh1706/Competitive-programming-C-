#include<iostream>
#include<list>
#include<map>
using namespace std;
class graph
{
    int v;
    list<int> *l;
public:
    graph(int n)
    {
        v=n;
        l=new list<int>[v];
    }
    void addedge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printaddlist()
    {
        for(int i=0;i<v;i++)
        {
            cout<<i<<"-->";
            for(auto nbr:l[i])
            {
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }
};
class graphusingmap
{
    map<int,list<int>> m;
public:
    graphusingmap()
    {

    }
    void addedge(int a,int b,bool bdir)
    {
        map[a].push_back(b);
        if(bdir)
        {
            map[b].push_back(a);

        }
    }
    void printgraph()
    {
        for(auto node:m)
        {
            cout<<m.first<<"-->";
            for(auto l:m.second)
            {
                cout<<l<<"    ";
            }
            cout<<endl;
        }
    }

};
class Graph
{
    unordered_map<string,list<pair<string,int> >> l;
public:
    void addedge(string x,string y,bool bidir,int wt)
    {
        l[x].push_back(make_pair(y,wt));
        if(bidir)
        {
            l[y].push_back(make_pair(x,wt));
        }
    }
    void print adj()
    {
        for(auto p:l)
        {
            string node=p.first;
            cout<<node<<"-->";
            for(auto nbr:node.second)
            {
                cout<<nbr.first<<"-"<<nbr.second<<"       ";
            }

        }
    }
};
int main()
{
    graph g(7);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(5,6);
    g.addedge(4,5);
    g.printaddlist();
return 0;


}

