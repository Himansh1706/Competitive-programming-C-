#include<iostream>
using namespace std;
bool cowsrag(int arr[],int n,int cows,int min_sep)
{
    int k=0;count=1,i=1;
    while(1)
    {
        if(arr[i]-k>=min_sep)
        {
            count++;
            k=arr[i];
        }
        if(count==cows)
        {
            return true;
        }
        i++;
        if(i==n)
        {
            return false;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n,cows;
        cin>>n>>cows;
        int stalls[n];
        for(int i=0;i<n;i++)
        {
          cin>>stalls[i];  
        }
        int s=0;
        int e=stalls[n-1]-stalls[0];
        while(s<=e)
        {
            int mid=(s+e)/2;
            int cowsrakhpaye=cowsrag(stalls,n,cows,mid);
            if(cowsrakhpaye)
            {
                s=mid+1;
                ans=mid;
            }
            else 
            {
                e=s-1;
            }


        }
cout<<ans<<endl;
    }
return 0;
}
