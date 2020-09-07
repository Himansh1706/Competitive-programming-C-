#include<iostream>
using namespace std;
#define ll long long int
int main() {
	ll n,k,t,ans=0;
	cin>>n>>k>>t;
	ll arr[n],sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	ll beg=0;
	ll end=sum*t;
	
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
			if(t1+(arr[i]*t)>mid)
			{
				break;
			}
			t1=t1+(arr[i]*t);
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

	cout<<ans;
	return 0;
}