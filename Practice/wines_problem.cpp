#include<iostream>
using namespace std;
int wines(int w[],int i,int j,int y)
{
    if(i>j)
    {
        return 0;
    }
    int op1=(w[i]*y)+wines(w,i+1,j,y+1);
    int op2=(w[j]*y)+wines(w,i,j-1,y+1);
    return max(op1,op2);
}
int wines_dp(int w[],int i,int j,int y,int dp[][100])
{
    if(i>j)
    {
        return 0;
    }
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }
    int op1=(wines(w,i+1,j,y+1)+(w[i]*y));
    int op2=wines(w,i,j-1,y+1)+w[j]*y;
    return dp[i][j]=max(op1,op2);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dp[100][100]={0};
    cout<<wines_dp(arr,0,n-1,1,dp);
}
