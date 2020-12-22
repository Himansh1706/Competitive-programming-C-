#include<bits/stdc++.h>
using namespace std;
bool p(vector<int> A,int n,int key,int b)
{
    int cnt=1;
    int current=0;
    int i=0;
    while(1)
    {
        if(current+A[i]<key)
        {
            current+=A[i];
        }
        else
        {
            current=A[i];
            cnt++;
        }
        i++;
        if(i==n)
        {
            return true;
        }
        if(cnt==b+1)
        {
            return false;
        }

    }
}
int books(vector<int> A,int B)
{
    int s=*(A.end());
    int e=0;
    int n=0;
    for(auto i=A.begin();i<A.end();i++)
    {
        e+=*i;
        n++;
    }
    int ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        bool possible=p(A,n,mid,B);
        if(possible)
        {
            e=mid-1;
            ans=mid;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int b=2;
    vector<int> a;
    a.push_back(12);
    a.push_back(34);
    a.push_back(67);
    a.push_back(90);
    int ans=books(a,b);
    int cnt=0;
    for(auto it=a.begin();it!=a.end();it++)
    {
    cnt+=*it;
    if(cnt>=ans)
    {
        break;
    }

    }

    cout<<cnt;
}
