/*
Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format
A single String S

Constraints
1 < = length of String < = 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.

*/
#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	char a=s[0];
	int count=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(a==s[i])
		{
			count++;
		}
		if(a!=s[i+1])
		{
			cout<<a<<count;
			a=s[i+1];
			count=0;
			
		}
	}
	if(s[s.length()-1]==s[s.length()-2])
	{
		count++;
		cout<<s[s.length()-1]<<count;
	}
	else
	{
		cout<<s[s.length()-1]<<1;
	}
	return 0;
}