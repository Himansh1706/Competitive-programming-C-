#include<iostream>
using namespace std;
int main()
{
    int a,n=0;
    cin>>a;
    int p=1;
    while(a>0)
    {
       n=n+((a&1)*p);
       p=p*10;
       a=a>>1;
    }
    cout<<n<<endl;
    return 0;
}