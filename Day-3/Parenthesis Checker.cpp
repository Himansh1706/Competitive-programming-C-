/*
Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”

Input:
The first line of input contains an integer T denoting the number of test cases.  Each test case consists of a string of expression, in a separate line.

Output:
Print 'balanced' without quotes if the pair of parenthesis is balanced else print 'not balanced' in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ |s| ≤ 105

Example:
Input:
3
{([])}
()
([]

Output:
balanced
balanced
not balanced
*/

#include <bits/stdc++.h> 
using namespace std; 

int main() {
	//code
int t;
cin>>t;
for(int k=0;k<t;k++)
{
    string s;
    long long int a=0,b=0,c=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            a++;
        }
        else if(s[i]=='[')
        {
            b++;
        }
        else if(s[i]=='{')
        {
            c++;
        }
        
        else  if(s[i]==')')
        {
            a--;
        }
        else if(s[i]==']')
        {
            b--;
        }
        else if(s[i]=='}')
        {
            c--;
        }
    }
    if(a==0&&b==0&&c==0)
    {
        cout<<"balanced";
        
    }
    else{
        cout<<"not balanced";
    }
    cout<<endl;
}
	return 0;
}