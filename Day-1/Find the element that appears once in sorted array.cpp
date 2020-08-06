/*
Given a sorted array A, size N, of integers; every element appears twice except for one. Find that element that appears once in array.

Input:
The first line of input consists of T, the number of the test cases. T testcases follow. Each testcase contains two lines of input.
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
For each testcase, in a new line, print the number that appears only once in the array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ A[i] ≤ 1017

Example:
Input:
1
11
1 1 2 2 3 3 4 50 50 65 65
Output:
4
*/

#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,i;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i=i+2)
	    {
	        if(arr[i]!=arr[i+1])
	        {
	            cout<<arr[i]<<endl;
	            break;
	        }
	    }
	    
	}
	return 0;
}