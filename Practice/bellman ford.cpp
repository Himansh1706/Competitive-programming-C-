#include<bits/stdc++.h>
using namespace std;
vector<int> bellman_ford(int n,int src,vector<vector<int> > edges)
{
    vector<int> dist(n+1,INT_MAX);
    dist[src]=0;
    for(int i=0;i<v-1;i++)
    {
        for(edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            int wt=edge[2];
            if(edge[u]!=INT_MAX && dist[v]>dist[u]+wt)
            {
                dist[v]=dist[u]+wt;
            }
        }
    }
    for(edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            int wt=edge[2];
            if(edge[u]!=INT_MAX && dist[v]>dist[u]+wt)
            {
                cout<<"Negative cycle";
                exit(0);
            }
        }
    return dist;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > edges;
    for(int i=0;i<n;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({u,v,wt});
    }

}

