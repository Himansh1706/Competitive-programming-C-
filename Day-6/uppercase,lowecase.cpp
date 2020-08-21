/* 
Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

Input Format
Character (ch)

Constraints
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L
Explanation
Anyone can Do it using Ascii codes. I dare you - "Try to not use ascii codes." ;)

*/

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n=s.length();
	char c;
	int maxx=0;
	for(int i=0;i<n;i++)
	{
		char a=s[i];
		int count=0;
		for(int j=i+1;j<n;j++)
		{
			if(s[j]==a)
			{
				count++;
			}
		}
		if(count>=maxx)
		{
			c=a;
			maxx=count;
		}
	}
	cout<<c<<endl;

	return 0;
} 