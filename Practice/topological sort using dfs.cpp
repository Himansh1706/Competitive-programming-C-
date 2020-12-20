#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<int>> m;
public:
    void addedge(int a,int b)
    {
        m[a].push_back(b);
    }
    void helper(int src,map<int,bool> &visited,stack<int> &ordering)
    {
        visited[src]=true;
        for(auto node:m[src])
        {
            if(!visited[node])
            {
                helper(node,visited,ordering);
            }
        }
        ordering.push(src);
        return;
    }
    void topological(int src)
    {
        stack<int> ordering;
        map<int,bool> visited;
        for(auto p:m)
        {
            visited[p.first]=false;
        }

        for(auto p:m)
        {
            if(!visited[p.first])
            {
                helper(p.first,visited,ordering);
            }
        }
        while(!ordering.empty())
        {
            cout<<ordering.top();
            ordering.pop();        }

    }
};
int main()
{
    graph g;
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(3,4);
    g.addedge(2,4);
    g.topological(1);
}
