#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;
    int ans=1;
    while(n>0)
    {
        int last_bit=n&1;
        if(last_bit==1)
        {
        ans*=(a*(n&1));
        }
        a=a*a;
        n=n>>1;
    }
    cout<<ans;
    return 0;
}
