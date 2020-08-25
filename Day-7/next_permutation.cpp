#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,0,4};
    int n=4;
    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;


}