/*
Given an array of elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, the size of array, the second line of each test case contains N integers which are the array elements.

Output:
Print the maximum element in the array.

Constraints:
1 ≤ T ≤ 50
3 ≤ N ≤ 106
1 ≤ Ai ≤ 106

Example:
Input:
2
9
1 15 25 45 42 21 17 12 11
5
1 45 47 50 5

Output:
45
50
*/

#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,flag=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	     if(arr[i]<arr[i-1])
	     {cout<<arr[i-1]<<endl;
	     flag=1;
	     break;
	         
	     }
	    }
	    if(flag==0)
	    {
	        cout<<arr[n-1]<<endl;
	    }
	    
	}
	return 0;
}