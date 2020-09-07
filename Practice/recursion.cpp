#include<iostream>
using namespace std;
int linear_search(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(a[0]==key)
    {
        return 0;
    }
    int i =linear_search(a+1,n-1,key);
    if(i==-1)
    {
        return -1;
    }
    return i+1;
}
int last_occurence(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int i=last_occurence(a+1,n-1,key);
    if(i==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else {
            return -1;
        }
    }
    return i+1;

}
void all_occurences(int *a,int i,int n,int key)
{
    if(i==n)
    {
        return;
    }
    if(a[i]==key)
    {
        cout<<i+1<<",";
    }
    all_occurences(a,i+1,n,key);

}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,100,11,12,13,14,15,16,17,18,19,100,100,22,23,24};
int n=24;
cout<<linear_search(arr,n,100)+1<<endl;
cout<<last_occurence(arr,n,100)+1<<endl;
all_occurences(arr,0,n,100);
return 0;
}