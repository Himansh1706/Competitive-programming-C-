
#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		int current_sum=0,max_sum=0;
		for(int j=0;j<n;j++)
		{
			current_sum+=arr[j];
			if(current_sum<0)
			{
				current_sum=0;
			}
			if(current_sum>max_sum)
			{
				max_sum=current_sum;
			}
		}
cout<<max_sum<<endl;
	}
	return 0;
}