#include <iostream>
using namespace std;

int bin_search(int A[], int left, int right, int k)
{
    int mid;
while(left<=right)
{
    mid=(left+right)/2;
    if(A[mid]==k)
    {
      
        return 1;
        
    }
    if(A[mid]<k)
    {
        left=mid+1;
    }
    else{
        right=mid-1;
    }
}
return -1;
}

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,l,i;
	    cin>>n>>l;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int ans=bin_search(arr,0,n,l);
	    cout<<ans<<endl;
	}
	return 0;
}
