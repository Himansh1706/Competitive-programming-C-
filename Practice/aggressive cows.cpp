#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cowsrakhpaye(ll *arr,ll key,ll c,ll n)
{
    ll k=arr[0];
    ll j=1;
    ll cnt=1;
    while(1)
    {
        if(arr[j]-k>=key)
        {
            cnt++;
            k=arr[j];
        }
        if(cnt==c)
        {
            return true;
        }
        j++;
        if(j==n)
        {
            return false;
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,c;
    cin>>n>>c;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll s=0;
    ll e=arr[n-1]-arr[0];
    int ans=0;
    while(s<=e)
    {
        ll mid=((s+e)/2);
        bool a=cowsrakhpaye(arr,mid,c,n);
        if(a)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
