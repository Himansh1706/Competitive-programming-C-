#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a>>i;
    int n=a&(-1<<i);
    cout<<n<<endl;
    return 0;
}