/*

Consider a big party where a log register for guest’s entry and exit times is maintained. Find the time at which there are maximum guests at the party. Note that entries in the register are not in any order.  if two events have the same time, then arrival is preferred over the exit.



Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the entry and exit array. Then the next two lines contains the entry and exit array respectively.

Output:
Print the maximum no of guests and the time at which there are maximum guests at the party.

Constraints:
1<=T<=10^5
1<=N<=10^5
1<=entry[i],exit[i]<=10^5

Example:
Input:
2
5
1 2 10 5 5
4 5 12 9 12
7
13 28 29 14 40 17 3 
107 95 111 105 70 127 74 

Output:
3 5
7 40

*/


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	for(long long int l=0;l<t;l++ )
	{
	    long long int n,max=0,count=0;
	    cin>>n;
	    long long int arr[n];
	    long long int arr1[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    sort(arr,arr+n);
	    sort(arr,arr+n);
	    long long int i=0,j=0,time=0;
	    while(1)
	    {
	        count++;
	        if(arr1[j]<arr[i])
	        {
	            count--;
	            j++;
	            
	        }
	       
	        if(count>max)
	        {
	            max=count;
	            time=arr[i];
	        }
	         i++;
	        if(i==n || j==n)
	        {
	            break;
	        }
	       
	    }
	    cout<<max<<" "<<time<<endl;
	}
	return 0;
}