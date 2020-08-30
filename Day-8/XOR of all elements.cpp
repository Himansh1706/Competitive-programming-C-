/*
Given an array A[] having n positive elements. The task to create another array B[] such as B[i] is XOR of all elements of array A[] except A[i].

Examples:

Input : A[] = {2, 1, 5, 9}
Output : B[] = {13, 14, 10, 6}

Input : A[] = {2, 1, 3, 6}
Output : B[] = {4, 7, 5, 0}


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array (B[]).

Output:
For each test case in a new line print the space separated values of the new array (B[]). 

Constraints:
1<=T<=100
1<=N<=100
1<=A[]<=100

Example:
2
4
2 1 5 9
4
2 1 3 6
Output:
13 14 10 6
4 7 5 0
*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int sum;
	    if(n==1)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(j==0)
	        {
	            sum=arr[1];
	        }
	        else{
	            sum=arr[0];
	        }
	       for(int k=1;k<n;k++)
	       {
	           if(j==0 and k==1)
	           {
	               continue;
	           }
	           if(j!=k)
	           {
	               sum=sum^arr[k];
	           }
	       }
	       cout<<sum<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}