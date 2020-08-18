#include<iostream>
using namespace std;
#include<algorithm>
int main() {
	int n;
	cin>>n;
	int arr[n],k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>k;
sort(arr,arr+n);
for(int i=0;i<n-2;i++)
{
	int l=i+1;
	int r=n-1;
	while(l<r)
	{
		int a=arr[i]+arr[l]+arr[r];
		if(a>k)
		{
			r--;
		}
		else if(a<k)
		{
			l++;
		}
		else {
			cout<<i<<", "<<l<<" and "<<r<<endl;
            l++;
            r--;
		}
	}
}
	return 0;
}