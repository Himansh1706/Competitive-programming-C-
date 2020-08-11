/*
Given an array A of positive integers. Count number of smaller elements on right side of each array.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N,N is the size of array. The second line of each test case contains N input arr[i].

Output:
Print the countSmaller array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 <= Ai  <= 108

Example:
Input:
2
7
12 1 2 3 0 11 4
5
1 2 3 4 5

Output:
6 1 1 1 0 1 0
0 0 0 0 0
*/


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int brr[n]={0};
	    brr[n-1]=0;
	    for(int i=n-2;i>=0;i--)
	    {
	        int count=0;
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[j]<arr[i])
	            {
	                count++;
	            }
	        }
	        brr[i]=count;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<brr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}