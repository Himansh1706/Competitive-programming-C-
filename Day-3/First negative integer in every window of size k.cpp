/*
Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array. The last line contains the window size k.

Output:
Print the space separated negative integer starting from the first till the end for every window size k. If a window does not contain a negative integer , then print 0 for that window.

Constraints:
1<=T<=10^5
1<=n<=10^5
1<=a[i]<=10^5
1<=k<=n

Example:
Input:
2
5
-8 2 3 -6 10
2
8
12 -1 -7 8 -15 30 16 28
3

Output:
-8 0 -6 -6
-1 -1 -7 -15 -15 0

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    int k;
	    cin>>k;
	    for(int i=0;i<n-k+1;i++)
	    {
	        int flag;
	        flag=0;
	        for(int j=i;j<i+k;j++)
	       {
	           if(arr[j]<0)
	           {
	               cout<<arr[j]<<" ";
	               flag=1;
	               break;
	               
	           }
	       }
	       if(flag!=1)
	       {
	           cout<<0<<" ";
	       }
	       
	    }
	    cout<<endl;
	}
	return 0;
}