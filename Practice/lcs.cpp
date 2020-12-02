#include<iostream>
#include<vector>
using namespace std;
int lcs(string s1,string s2,int i,int j,vector<vector<int> > &v)
{
    if(s1.length()==i or s2.length()==j)
    {
        return 0;
    }
    if(v[i][j]!=-1)
    {
        return v[i][j];
    }
    if(s1[i]==s2[j])
    {
        return v[i][j]=1+lcs(s1,s2,i+1,j+1,v);
    }
    else
    {
        int op1=lcs(s1,s2,i+1,j,v);
        int op2=lcs(s1,s2,i,j+1,v);
        return v[i][j]=max(op1,op2);
    }
}
int main()
{
    string s1="ABCDEF";
    string s2="ZBVCEF";
    vector<vector<int> > v(s1.length(),vector<int>(s2.length(),-1));
    cout<<lcs(s1,s2,0,0,v);
}
