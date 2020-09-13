#include<iostream>
using namespace std;
void count_sort(int *a,int n)
{
    int largest=-1;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,a[i]);
    }
    
    int arr[largest+1]={0};
    for(int i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
    for(int i=0;i<=largest;i++)
    {
        while(arr[i]>0)
        {
            cout<<i<<endl;
            arr[i]--;
        }

    }
}
int main()
{
    int arr[]={1,45,23,12,67,35,98,45,90,67};
    int n=10;
    count_sort(arr,n);
    return 0;
}