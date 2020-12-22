#include<iostream>
using namespace std;
int count(int a)
{
 int cnt=0;
    while(a>0)
    {
        cnt+=a&1;
        a=a>>1;
    }
    return cnt;

}
int count_fast(int a)
{
    int cnt=0;
    while(a>0)
    {
        a=a&(a-1);
        cnt++;
    }

    return cnt;
}
int main()
{
    int a;
    cin>>a;

    cout<<count(a)<<endl;
    cout<<count_fast(a)<<endl;

}
