#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
	int xo=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        xo=xo^arr[i];
    }
    int temp=xo,pos=0;
    while((temp&1)!=1)
    {
        pos++;
        temp>>1;

    }
    int mask=(1<<pos),x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&mask)>0)
        {
            x=x^arr[i];
        }
    }
    y=xo^x;
    cout<<min(x,y)<<" "<<max(x,y);
    cout<<endl;
    return 0;

}