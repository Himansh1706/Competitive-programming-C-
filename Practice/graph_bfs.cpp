#include<bits/stdc++.h>
using namespace std;
//level order traversal
class graph
{
    map<int,list<int> > m;
public:
    void addEdge(int a,int b,bool bidir=true)
    {
        m[a].push_back(b);
        if(bidir)
        {
            m[b].push_back(a);
        }
    }
    void bfs(int src)
    {
        queue<int> q;
        map<int,bool> visited;
        map<int,int> distance;
        q.push(src);
        visited[src]=true;
        for(auto node_pair:m)
        {
            int node=node_pair.first;
            distance[node]=INT_MAX;
        }
        distance[src]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();


            for(auto a:m[node])
            {
                if(visited[a]!=true)
                {
                    q.push(a);
                    distance[a]=distance[node]+1;
                    visited[a]=true;
                }
            }
        }

        for(auto ans:distance)
        {
            cout<<ans.first<<" "<<ans.second<<endl;

        }
    }

};
int main()
{
    graph g;
    g.addEdge(11,10);
    g.addEdge(10,9);
    g.addEdge(10,6);
    g.addEdge(9,7);
    g.addEdge(6,8);
    g.addEdge(9,4);
    g.addEdge(4,2);
    g.addEdge(4,1);
    g.addEdge(7,2);
    g.addEdge(7,5);
    g.addEdge(7,8);
    g.addEdge(2,3);
    g.addEdge(2,12);
    g.addEdge(2,5);
    g.addEdge(10,6);
    g.addEdge(3,12);
    g.addEdge(5,12);
    g.addEdge(1,3);
    g.addEdge(3,5);
    g.addEdge(2,8);
    g.bfs(11);
}
