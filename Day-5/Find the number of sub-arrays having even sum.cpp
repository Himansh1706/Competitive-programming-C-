/*
Given an array A[]  you have to  find the number of subarrays whose sum is an even number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line  of each test case contains an integer N, where N is the size of the array A[ ] .Then Next line contains space seperated N value of the array A[ ].

Output:
For each test case in a new line, number of sub-arrays having even sum

Constraints:
1 <= T <= 200
1 <= N <= 100
1<= A[i] <=100

Example:
Input:
1
6
1 2  2  3  4 1
Output:
9
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n,k=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        int sum=0;
	        for(int j=i;j<n;j++)
	        {
	            sum=sum+arr[j];
	            if(sum%2==0)
	            {
	                k++;
	            }
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}