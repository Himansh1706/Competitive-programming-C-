/*
Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.

Input:
First line of the input contains the number of test cases T, T lines follow each containing a stream of characters.

Output:
Corresponding to every test case, output the last index of 1. If 1 is not present, print "-1" (without quotes).

Constraints:
1 <= T <= 110
1 <= |S| <= 106

Example:
Input:
2
00001
0
Output:
4
-1

Explanation:
Testcase 1: Last index of  1 in given string is 4.
Testcase 2: Since, 1 is not present, so output is -1.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    string s;
	    cin>>s;
	    int n=s.length(),flag=0;
	    
	    for(int i=n;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	            cout<<i<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
