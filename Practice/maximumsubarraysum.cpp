#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_so_far=0;
    int current_sum=0;
    for(int i=0;i<n;i++)
    {
        current_sum+=arr[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        max_so_far=max(max_so_far,current_sum);
    }
    cout<<max_so_far;
    cout<<endl;
    return 0;

}
