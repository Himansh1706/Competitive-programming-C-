/*
FIND OUT THE NO. OF NO.S BETWEEN 1 AND N WHICH ARE DIVISIBLEBY ANY OF PRIME NO.S LESS THAN 20 
*/
#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll primes[]={2,3,5,7,9,11,13,17,19};
    while(t--)
    {
        ll n;
        cin>>n;
        ll subsets = (1<<8)-1;
        ll ans=0;
        for(ll i=1;i<=subsets;i++)
        {
            ll deno = 1ll;
            ll setbits = __builtin_popcount(i);
            for(ll j=0;j<=7;j++)
            {
                if(i&(1<<j))
                {
                    deno=deno*primes[j];
                }
            }
            if(setbits&1)
            {
                ans+=(n/deno);
            }
            else
            {
                ans-=(n/deno);
            }
            
        }
    cout<<ans<<endl;
    }

return 0;

}