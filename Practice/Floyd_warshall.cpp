#include<bits/stdc++.h>
using namespace std;
#define INT_MAX 100000
vector<vector<int> > floyd_warshall(vector<vector<int> > graph)
{
    int v=graph[0].size();
    vector<vector<int> > dist(graph);
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
            if(dist[i][j]>dist[i][k]+dist[k][j])
            {
                dist[i][j]=dist[i][k]+dist[k][j];
            }
            }
        }
    }
    return dist;
}
int main()
{
    vector<vector<int> > graph={{0,INT_MAX,-2,INT_MAX},{4,0,3,INT_MAX},{INT_MAX,INT_MAX,0,2},{INT_MAX,-1,INT_MAX,0}};
    auto result=floyd_warshall(graph);
    for(int i=0;i<result.size();i++)
    {for(int j=0;j<result.size();j++)
    {
     cout<<result[i][j]<<"\t";
    }
    cout<<"\n";
    }
}
