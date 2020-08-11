/*
Pitsy needs help in the given task by her teacher. The task is to divide a array into two sub array (left and right) containing n/2 elements each and do the sum of the subarrays and then multiply both the subarrays.

Input:
First line consists of T test cases. Only line of every test case consists of an integer N.​

Output:
Print the answer by dividing array into left and right array and add their elements individually and then multiply both the array

Constraints:
1<=T<=100
1<=N<=1000
1<=Ai<=100

Example:
Input:
2
4
1 2 3 4
3
4 5 6
Output:
21
44
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
	    int arr[n],right=0,left=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	     for(int i=1;i<=n;i++)
	    {
	        if(i<=n/2)
	        {
	         right=right+arr[i-1];   
	        }
	        else{
	            left=left+arr[i-1];
	        }
	    }
	    cout<<(right*left)<<endl;
	    
	     
	}
	return 0;
}