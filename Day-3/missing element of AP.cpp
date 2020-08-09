/*
Find the missing element from  an ordered array A[ ], consisting of N elements representing an Arithmetic Progression (AP) .
 

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line of each test case contains an integer N, where N is the size of the array A[ ].
The second line of each test case contains N space separated integers of an Arithmetic Progression denoting elements of the array A[ ].
 

Note: The series should have a missing element in between a perfect A.P. with no missing element will not be considered.
 

Output:
Print out the missing element. 
 

Constraints:
1 <= T <= 100
2 <= N <= 10
-50 <= A[i] <=50
 

Examples :

Input:
3
3 
2 10 14 
4 
-28 -21 -7 0 
5 
9 12 15 21 24

Output : 
6
-14
18
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n,d=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	     cin>>arr[i];   
	    }
	    if(n==2)
	    {
	        cout<<(arr[0]+arr[1])/2<<endl;
	        continue;
	    } else{
	    if((arr[1]-arr[0])==(arr[2]-arr[1]))
	    {
	        d=arr[1]-arr[0];
	    }
	    else{
	        if((arr[1]-arr[0])<(arr[2]-arr[1]))
	        {
	            d=arr[1]-arr[0];
	        }
	        else{
	            d=arr[2]-arr[1];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	     if((arr[i+1]-arr[i])!=d)
	     {
	         cout<<arr[i]+d<<endl;
	         break;
	     }}
	    }
	}
	return 0;
}