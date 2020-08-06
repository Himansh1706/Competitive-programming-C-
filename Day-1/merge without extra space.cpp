/* Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.

Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

Output:
For each test case, print (X + Y) space separated integer representing the merged array.

Constraints:
1 <= T <= 100
1 <= X, Y <= 5*104
0 <= arr1i, arr2i <= 109

Example:
Input:
2
4 5
1 3 5 7
0 2 6 8 9
2 3
10 12
5 18 20

Output:
0 1 2 3 5 6 7 8 9
5 10 12 18 20

*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int x,y;
	    int m,n,i;
	    cin>>m>>n;
	    int arr[m],arr1[n];
	    for(i=0;i<m;i++)
	    {
	        cin>>arr[i];
	    }
	     for(i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    x=0;
	    y=0;
	    for(i=0;i<m+n;i++)
	    {
	        if(arr[x]>arr1[y] && x<m && y<n)
	        {
	            cout<<arr1[y]<<" ";
	            y++;
	        }
	        else
	        {
	            if (arr[x]<=arr1[y] && x<m && y<n){
	            cout<<arr[x]<<" ";
	            x++;}
	        }
	    }
	   
	    if(x<m)
	    {
	        for(i=x;i<m;i++)
	        {
	            cout<<arr[i]<<" ";
	        }
	    }
	    else
	    {
	     for(i=y;i<n;i++)
	        {
	            cout<<arr1[i]<<" ";
	        }   
	    }
	    cout<<endl;
	}
	return 0;
}