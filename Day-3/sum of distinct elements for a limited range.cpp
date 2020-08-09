/*
Given an array of n elements such that every element of array is an integer in the range 1 to n, find the sum of all the distinct elements of the array.

Input:
First line consists of T test cases. First line of every test case consists of N. Second line of every test case consists of elements of Array.

Output:
Single line output, print the sum of distinct element of array.

Constraints:
1<=T<=200
1<=N<=10^4

Example:
Input:
2
5
1 2 3 3 4
5
1 1 1 2 2
Output:
10
3
*/

#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+arr[i];
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[j]==arr[i])
	            {
	                arr[j]=0;
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}