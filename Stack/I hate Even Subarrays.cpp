/*
You are given a binary string, (string which contains 0's and 1's), You have to perform several operations on this string, in one operation choose a non-empty even length substring containing only 0's or only 1's and remove it from the string.

Your goal is to minimize the final length of the string after performing several operations.It is possible that the final string may become empty, in that case print "KHALI" without quotes.

And it can be proved that there is always an unique string with minimal length after performing the operations.

Input:

First line of input contains an intger T denoting number of testcases.
Next T lines of input contains a binary string S.
Output:

for each testcase print the required minimal string.
Constraints:

1 <= T <= 10
1 <= |S|  <= 105
*/

#include<iostream>
#include<vector>
using namespace std;
class stack{
	private:
	vector<char> v;
	public:
	bool isempty()
	{
		return v.size()==0;
	}
	void push(char data)
	{
		v.push_back(data);
	}
	void pop()
	{
		v.pop_back();
	}
	char top()
	{
		return v[v.size()-1];
	}
	void show()
	{
		for(auto it:v)
		{
			cout<<it;
		}
	}
};
int main()
{
int t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	int i=0;
		stack s1;
	while(s[i]!='\0')
	{
	
		if(s1.isempty())
		{
			s1.push(s[i]);
		}
		else{
			char ans=s1.top();
			if(ans==s[i])
			{
				s1.pop();
			}
			else{
				s1.push(s[i]);
			}
		}
		i++;
	}
	if(s1.isempty())
	{
		cout<<"KHALI";
	}
	s1.show();
	cout<<endl;
}
return 0;
}