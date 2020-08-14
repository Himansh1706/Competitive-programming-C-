/*
Given an array of positive integers of size N, we can form a group of two or three only, the group should be such that the sum of all elements in that group is a multiple of 3. Count all possible number of groups that can be generated in this way.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, where N is the size of array. The second line of each test case contains N elements of array.

Output:
Print number of all possible group.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Ai,j ≤ 106

Example:
Input:
2
5
3 6 7 2 9
4
2 1 3 4

Output:
8
4

Explanation:
Testcase 1:
Groups of two are: {3,6}, {3,9}, {9,6}, {7,2}, {3, 6,9},
Groups of three are: {3, 7, 2}, {7, 2, 6}, {7, 2, 9}.


*/


#include <iostream>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    ll arr1[3]={0};
	    for(ll i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        arr1[arr[i]%3]++;
	    }
	    ll res=0;
	     // Case 3.a: Count groups of size 2  
    // from 0 remainder elements 
    res += ((arr1[0]*(arr1[0]-1))>>1); 
  
    // Case 3.b: Count groups of size 2 with  
    // one element with 1 remainder and other 
    // with 2 remainder 
    res += arr1[1] * arr1[2]; 
  
    // Case 4.a: Count groups of size 3 
    // with all 0 remainder elements 
    res += (arr1[0] * (arr1[0]-1) * (arr1[0]-2))/6; 
  
    // Case 4.b: Count groups of size 3  
    // with all 1 remainder elements 
    res += (arr1[1] * (arr1[1]-1) * (arr1[1]-2))/6; 
  
    // Case 4.c: Count groups of size 3  
    // with all 2 remainder elements 
    res += ((arr1[2]*(arr1[2]-1)*(arr1[2]-2))/6); 
  
    // Case 4.c: Count groups of size 3 
    // with different remainders 
    res += arr1[0]*arr1[1]*arr1[2];
    cout<<res<<endl;
	    
	}
	return 0;
}