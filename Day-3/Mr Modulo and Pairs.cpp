/* 
Mr. Modulo comes up with another problem related to modulo and this time he is interested in finding all the possible pairs a and b in the array a[] such that a % b = k where k is a given integer. The array given will have distinct elements.
You are required to print how many such pairs exist.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains two integers n and k, where n is the number of elements in the array a[]. Next line contains space separated n elements in the array a[].

Output:
Print an integer which is the total number of such pairs in the array.

Constraints:
1<=T<=10
2<=n<=1000
1<=k<=1000
1<=a[i]<=100000

Example:
Input:
1
5 3
2 3 5 4 7

Output:
4
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n,k,count=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	    
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]%arr[j]==k){
	                count++;
	            }
	            if(arr[j]%arr[i]==k)
	            {
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}