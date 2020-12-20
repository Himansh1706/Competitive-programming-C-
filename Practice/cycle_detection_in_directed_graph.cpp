#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<int> > m;
    int v;
public:
    graph(int v)
    {
        this->v=v;
    }
    void addEdge(int x,int y)
    {
        m[x].push_back(y);
    }
    bool cycle_mila(int a,bool *stack1,bool *visited)
    {
        stack1[a]=true;
        visited[a]=true;
        for(int nbr:m[a])
        {
            if(stack1[nbr]==true)
            {
                return true;
            }
            else if(visited[nbr] == false)
            {
                bool c=cycle_mila(nbr,stack1,visited);
                if(c==true)
                {
                    return true;
                }
            }
        }
        stack1[a]=false;
        return false;

    }
    bool dfs()
    {
        bool *visited=new bool[v];
        bool *stack1=new bool[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
            stack1[i]=false;
        }
        return cycle_mila(0,stack1,visited);
    }
};
int main()
{
    graph g(3);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,2);
    cout<<g.dfs();
    return 0;
}
