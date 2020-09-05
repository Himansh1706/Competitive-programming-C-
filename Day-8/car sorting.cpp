/*
there are different cabs at different positions we need to sort cab by distance we are at origin */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    int d1=(a.first*a.first)+(a.second*a.second);
    int d2=(b.first*b.first)+(b.second*b.second);
    if(d1==d2)
    {
        return a.first>b.first;
    }
    return d1<d2;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    for(int i =0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),cmp);
    for(auto p:v)
    {
        cout<<"car"<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
