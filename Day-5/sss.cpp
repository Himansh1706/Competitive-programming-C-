#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
int sum=0;
for(int ti=0;ti<m;ti++)
    {
        for(int tj=0;tj<n;tj++)
        {
            for(int bi=ti;bi<m;bi++)
    {
        for(int bj=tj;bj<n;bj++)
        {
            for(int i=ti;i<=bi;i++)
    {
        for(int j=tj;j<=bj;j++)
        {
            sum+=arr[i][j];
        }
    }
    
        }
    }
    
        }
    }
    cout<<sum<<endl;
    return 0;
         
}
