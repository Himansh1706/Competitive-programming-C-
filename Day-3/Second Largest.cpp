/*
Given an array A of size N, print second largest element from an array.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line contains an integer N denoting the size of the array. The second line contains the N space seperated intgers of the array

Output:
For each testcase, in a new line, print the second largest element.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 500
1 ≤ Ai ≤ 1200

Example:
Input
2
5
89 24 75 11 23
6
56 42 21 23 65 20
Output
75
56
*/


#include <iostream>
#include<algorithm>
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
	    sort(arr,arr+n);
	    cout<<arr[n-2]<<endl;
	}

	return 0;
}