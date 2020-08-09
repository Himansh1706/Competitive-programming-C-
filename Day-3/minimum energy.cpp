/*
Given an array containing positive and negative numbers. The array represents checkpoints from one end to other end of street. Positive and negative values represent amount of energy at that checkpoint. Positive numbers increase the energy and negative numbers decrease. Find the minimum initial energy required to cross the street such that Energy level never becomes 0 or less than 0.
 

Note :  The value of minimum initial energy required will be 1 even if we cross street successfully without loosing energy to less than and equal to 0 at any checkpoint. The 1 is required for initial check point.
 

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of array. The second line of each test case contains N space separated integers denoting array elements.

Output:
Corresponding to each test case, in a new line, print the minimum initial energy required to cross the street.
 

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100
-500 ≤ A[i] ≤ 500

Example:

Input
2
5
4 -10 4 4 4
5
3  5 2  6 1

Output
7
1

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,a,energy=0;
	    cin>>n;
	    int arr[n],count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        count=count+a;
	        if(count<=0)
	        {
	            energy=0-count+1;
	            count=count+energy;
	            
	        }
	    }
	    if(energy==0)
	    {
	        cout<<1<<endl;
	    }
	    else{
	    cout<<energy<<endl;}
	}
	return 0;
}