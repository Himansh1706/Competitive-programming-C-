#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<pair<int,int> >> m;
    unordered_map<int,int> distance;

public:
    void addedge(int a,int b,int wt)
    {
        m[a].push_back(make_pair(b,wt));

            distance[a]=INT_MAX;
            distance[b]=INT_MAX;

    }
    void print()
    {
        for(auto a:m)
        {
            cout<<a.first<<"--->";
            for(auto p:a.second)
            {
                cout<<p.first<<"-"<<p.second<<"\t";
            }
            cout<<endl;
        }
    }
    void dijkstra(int src)
    {

        distance[src]=0;
        set<pair<int,int> > s;
        s.insert(make_pair(0,src));
        while(!s.empty())
        {
            auto node=*(s.begin());
            int a=node.second;
            int dist=node.first;
            s.erase(s.begin());
            cout<<a<<endl;
            for(auto p:m[a])
            {
                if(dist+p.second<distance[p.first])
                {
                    int dest=p.first;
                    auto f=s.find(make_pair(distance[dest],dest));
                    if(f!=s.end())
                    {
                        s.erase(f);
                    }
                    distance[dest]= dist+p.second;
                    s.insert(make_pair(distance[dest],dest));
                }
            }
        }
        for(auto d:distance)
        {
            cout<<d.first<<" -> "<<d.second;
            cout<<endl;
        }
        for(auto d:distance)
        {
            d.second=INT_MAX;

        }
    }

};
int main()
{
    graph india;
    india.addedge(1,2,2);
    india.addedge(0,1,1);
    india.addedge(0,2,5);
    india.addedge(1,3,2);
    india.addedge(3,4,3);
    india.addedge(2,4,2);
    india.addedge(3,5,1);
    india.addedge(4,5,2);
    india.addedge(1,4,1);
    india.dijkstra(0);

}
