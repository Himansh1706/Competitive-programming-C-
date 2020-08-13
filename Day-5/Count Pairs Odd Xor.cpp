/*
Given an array Arr[] of N integers. Write a program to find out number of pairs in array whose XOR is odd.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a single integer N which denotes the size of array. Second line of each test case contains N space separated integers which denotes the elements of the array.

Output:
For each test case print the number of pairs in array whose XOR is odd.

Constraints:
1<=T<=100
1<=N<=1000
1<=Arr[i]<=1000

Example:
Input:
2
3
1 2 3
4
1 2 3 4
Output:
2
4


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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
    {
        if((arr[i]^arr[j])%2!=0)
        {
            count++;
        }
    }
    
    }
    cout<<count<<endl;
    
}
	return 0;
}