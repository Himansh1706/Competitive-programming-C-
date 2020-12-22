#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{

    return a.second>b.second;
}
vector<int> sortByFreq(int arr[],int n)
{
    //Your code here
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i])==m.end())
        {
        m[arr[i]]=1;
        }
        else
        {
            m[arr[i]]++;
        }
    }
    vector<pair<int,int> > a;
    for(auto p:m)
    {
        a.push_back(make_pair(p.first,p.second));
    }
    sort(a.begin(),a.end(),compare);
     vector<int> ans;
    for(auto ap:a)
    {
        for(int i=0;i<ap.second;i++)
        {
            ans.push_back(ap.first);
        }
    }
   for(int i=0;i<n;i++)
        {
            cout<<ans[i];
        }

    return ans;

}
int main()
{
    int a[]={9,9,2,2,5};
    int n=5;
    sortByFreq(a,n);
}
