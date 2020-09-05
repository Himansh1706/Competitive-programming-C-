#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0;
    // approach 1
    while(a>0)
    {
        int b=a&1;
        count+=b;
        a=a>>1;

    }
    cout<<count<<endl;
    // approach 2
    cin>>a;
    count=0;
    while(a>0)
    {
        a=a&(a-1);
        count++;
        

    }
    cout<<count<<endl;
    // approach 3
    cin>>a;
    cout<<__builtin_popcount(a)<<endl;
    return 0;

}