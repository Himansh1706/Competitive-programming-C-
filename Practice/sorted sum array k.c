#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(a[i]+a[j]==k)
        {
            cout<<a[i]<<" "<<a[j];
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
