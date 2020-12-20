#include<bits/stdc++.h>
using namespace std;
class graph
{
    vector<pair<int,int> > *l;
    int v;
public:
    graph(int n)
    {
        v=n;
        l=new vector<pair<int,int> >[n];
    }
    void addEdge(int x,int y,int wt)
    {
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    int prims()
    {
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
        int ans=0;
        q.push({0,0});
        bool *visited=new bool[v]{0};
        while(!q.empty())
        {
            auto node=q.top();
            q.pop();
            int wt=node.first;
            int to=node.second;
            if(visited[to])
            {
                continue;
            }
            visited[to]=true;
            ans+=wt;
            for(auto nbr:l[to])
            {
                q.push({nbr.second,nbr.first});
            }
        }
        return ans;

    }
};
int main()
{
    graph g(4);
    g.addEdge(0,1,1);
    g.addEdge(1,3,3);
    g.addEdge(3,2,4);
    g.addEdge(2,0,2);
    g.addEdge(0,3,2);
    g.addEdge(1,2,2);
    cout<<g.prims()<<endl;
    return 0;
}
