#include<bits/stdc++.h>
using namespace std;
class DSU
{
    int *parent;
    int *rank1;
public:
    DSU(int n)
    {
        parent=new int[n];
        rank1=new int[n];
        for(int i=0;i<n;i++)
        {
            parent[i]=-1;
            rank1[i]=1;
        }
    }
    int find2(int a)
    {
        if(parent[a]==-1)
        {
            return a;

        }
        return parent[a]=find2(parent[a]);
    }
    void union1(int a,int b)
    {
        int s1=find2(a);
        int s2=find2(b);
        if(s1!=s2)
        {
            if(rank1[s1]>rank1[s2])
            {
                parent[s2]=s1;
                rank1[s1]+=rank1[s2];
            }
            else
            {
                parent[s1]=s2;
                rank1[s2]+=rank1[s1];
            }
        }
    }
};
class graph
{
    int v;
    vector<vector<int> > l;
public:
    graph(int n)
    {
        v=n;
    }
    void addEdge(int a,int b,int wt)
    {
        l.push_back({wt,a,b});
    }
    int kruksal()
    {
        sort(l.begin(),l.end());
        DSU S(v);
        int ans=0;
        for(auto edge:l)
        {
            int wt=edge[0];
            int a=edge[1];
            int b=edge[2];
            int s1=S.find2(a);
            int s2=S.find2(b);
            if(s1!=s2)
            {
                S.union1(s1,s2);
                ans+=wt;
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
    cout<<g.kruksal()<<endl;
    return 0;
}
