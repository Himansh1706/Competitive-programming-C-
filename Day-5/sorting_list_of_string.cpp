#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    cin.get();
    for(int i=0;i<n;i++)
    {
getline(cin,s[i]);
    }
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
cout<<s[i]<<endl;
    }
    return 0;
}