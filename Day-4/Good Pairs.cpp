/*
You are given an array of positive integer numbers a1,a2...aN.
Count number of pairs (i,j) such that:
1≤ i ≤ N
1≤ j ≤ N
ai < aj


Input:

The first line contains 'T' denoting the number of test cases. Then follows description of testcases.Each case begins with a single positive integer N denoting the size of array.The second line contains N space separated positive integers denoting the elements of array.
 

Output:

For each test case, output a single line containing number of pairs for corresponding test case.

Constraints:

1<=T<=20
1<=N<=10^3
1<=a[i]<=10^3

Example:

Input :
2
2
2 1  
3
2 3 2
 
Output : 
1
2

Explanation:

In the first test case, the only good pair is (2,1). 
In the second test case, the two good pairs are (2,3) and (3,2).
 
*/

#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	for(long long int l=0;l<t;l++)
	{
	    long long int n,count=0;
	    cin>>n;
	    long long int arr[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(long long int i=0;i<n;i++)
	    {
	        for(long long int j=0;j<n;j++)
	        {
	            if(arr[i]<arr[j])
	            {
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}