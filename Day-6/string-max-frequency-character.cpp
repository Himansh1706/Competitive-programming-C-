/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
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