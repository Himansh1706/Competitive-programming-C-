/*
Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

Input:
The first line of the input contains T, denoting number of testcases. Then follows description of each testcase. The first line of the testcase contains positive integer N denoting the length of string. The second line contains the string.

Output:
For each testcase, output the sorted string.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
1
5
edcab

Output:
abcde

Explanation:
Testcase 1: The given string in sorted order of its letters is: abcde
*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i];
	    }
	    cout<<endl;
	}
	return 0;
}
