/*
You are given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. You need to find the other two numbers and print them in ascending order.
 

Input :
The first line contains a value T, which denotes the number of test cases. Then T test cases follow .The first line of each test case contains a value N. The next line contains 2*N+2 space separated integers.

Output :
Print in a new line the two numbers in ascending order.

Constraints :
1<=T<=100
1<=N<=10^6
1<=A[i]<=5*10^8

Example:
Input :
2
2
1 2 3 2 1 4
1
2 1 3 2

Output :
3 4
1 3
*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,i,flag=0;
	    cin>>n;
	    int arr[(2*n)+2];
	    for(i=0;i<((2*n)+2);i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+(2*n)+2);
	    
	    for(i=0;i<((2*n)+2);i=i+2)
	    {
	        if(arr[i]!=arr[i+1])
	       {
	           cout<<arr[i]<<" ";
	           break;
	       }
	    }
	    i++;
	    
	    for(int j=i;j<((2*n)+1);j=j+2)
	    {
	        
	        if(arr[j]!=arr[j+1])
	        {
	            cout<<arr[j]<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<arr[(2*n)+1]<<endl;
	    }
	}
	return 0;
}