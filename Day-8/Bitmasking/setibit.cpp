#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n=a|(1<<b);
    cout<<n<<endl;
    return 0;
}