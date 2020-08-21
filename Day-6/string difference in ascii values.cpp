/*
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format
String

Constraints
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b
Explanation
For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.

*/


#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length()-1;i++)
	{
		int a =int(s[i+1])-int(s[i]);
cout<<s[i]<<a;
	}
	cout<<s[s.length()-1];
	return 0;
}