#include<iostream>
#include <bits/stdc++.h> 

using namespace std;
#define ll long long int
int main() {
	ll n,k,t;
	cin>>n>>k>>t;
	ll arr[1000000],sum=0;
    ll beg=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
        beg=max(beg,arr[i]);
	}
	//ll beg=*max_element(arr,arr+n);////*t;
	ll end=sum;//*t,
    ll ans=0;///k;
	
	while(beg<=end)
	{
		ll mid=(beg+end)/2;
		ll now=1;
        ll i=0;
		while(1)
		{
			ll t1=0;
			ll flag=0;
		while(1)
		
		{
			if(t1+(arr[i])>mid)
			{
				break;
			}
			t1=t1+(arr[i]);//*t);
			i++;
			if(i==n)
			{
				ans=mid;
				end=mid-1;
				flag=1;
                
				break;
			}
		} 
		if(flag==1)
		{
			break;
		}
		now++;
		if(now==k+1)
		{
			beg=mid+1;
			break;
		}
		}
		
	} 

	cout<<(ans*t)%10000003<<endl;
	return 0;
}