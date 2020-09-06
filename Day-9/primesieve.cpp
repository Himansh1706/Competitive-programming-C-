#include<iostream>
using namespace std;
#define ll long long
// Naive approach
bool inprime(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
//Prime sieve approach
void primesieve(int *p)
{
    for(int i=3;i<1000005;i+=2)
    {
        p[i]=1;
    }
    for(ll i=3;i<1000005;i+=2)
    {
        if(p[i]==1)
        {
            for(ll j=i*i;j<1000005;j+=i)
            {
               p[j]=0; 
            }
        }
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int main()
{
int n;
cin>>n;
int p[1000005]={0};
primesieve(p);
for(int i=0;i<n;i++)
{
    if(p[i]==1)
    {
    cout<<i<<"    ";
    }
}
cout<<endl;
return 0;
}