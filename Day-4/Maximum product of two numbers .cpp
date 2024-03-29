/*
Given an array with all elements greater than or equal to zero. Return the maximum product of two numbers possible.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, size of array. The second line of each test case contains array elements.

Output:
Print the maximum product of two numbers possible.

Constraints:
1 ≤ T ≤ 100
2 ≤ N ≤ 107
0 ≤ A[i] ≤ 104

Example:
Input:
1
5
1 100 42 4 23

Output:
4200

Explanation:
Testcase 1: Two maximum numbers are 100 and 42 and their product is 4200.


*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	for(long long int k=0;k<t;k++)
	{
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);
	    
	    cout<<arr[n-1]*arr[n-2]<<endl;
	}
	return 0;
}