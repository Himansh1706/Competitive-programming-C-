#include<bits/stdc++.h>
using namespace std;
class graph
{
    int v;
    vector<pair<int,int> > m;
public:
    graph(int v)
    {
        this->v=v;
    }
    void addEdge(int a,int b)
    {
        m.push_back(make_pair(a,b));
    }
    int findset(int i,int *parent)
    {
        if(parent[i]==-1)
        {
            return i;
        }
        return parent[i]=findset(parent[i],parent);
    }
    void union1(int a,int b,int *parent,int *rank1)
    {
        int s1=findset(a,parent);
        int s2=findset(b,parent);
        if(s1!=s2)
        {
            if(rank1[s1]<rank1[s2])
            {
              parent[s1]=s2;
              rank1[s2]+=rank1[s1];
            }
            else
            {
                parent[s2]=s1;
                rank1[s1]+=rank1[s2];
            }

        }
    }
    bool contaions_cycle()
    {
        int *parent=new int[v+1];
        int *rank=new int[v+1];
        for(int i=0;i<v;i++)
        {
            parent[i]=-1;
            rank[i]=1;
        }
        for(auto edge:m)
        {
            int i=edge.first;
            int j=edge.second;
            int s1=findset(i,parent);
            int s2=findset(j,parent);
            if(s1!=s2)
            {
                union1(i,j,parent,rank);
            }
            else
            {
                return true;
            }

        }
        return false;
    }
};
int main()
{
        graph g(3);
        g.addEdge(0,1);
        g.addEdge(1,2);
        g.addEdge(2,0);
        cout<<g.contaions_cycle();
}
