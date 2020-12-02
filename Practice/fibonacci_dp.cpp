#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int fib_dp_TD(int n,int dp[])
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ans=fib_dp_TD(n-1,dp)+fib_dp_TD(n-2,dp);
    return dp[n]=ans;
}
int fib_dp_BU(int n)
{
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    int dp[100]={0};
    dp[1]=1;
    cout<<fib(n)<<endl;
    cout<<fib_dp_TD(n,dp)<<endl;
    cout<<fib_dp_BU(n);
    return 0;
}

