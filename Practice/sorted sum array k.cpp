#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(a[i]+a[j]==k)
        {
            if(i==j)
            {
                cout<<a[i];
            }
            else
            {
                cout<<a[i]<<" "<<a[j];
            }
            i++;
            j--;
        }
        else if(a[i]+a[j]>k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
