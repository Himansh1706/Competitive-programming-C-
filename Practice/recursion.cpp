#include<iostream>
using namespace std;
void merge(int *a;int s;int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
}
void merge_sort(int a[],int s,int e)
{
if(s<=e)
{
    return;
}
int mid=(s+e)/2;
merge_sort(a,s,mid);
merge_sort(a,mid+1,e);
merge(a,s,e);
}
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
int fast_power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    int b=fast_power(a,n/2);
    int p=b*b;
    if(n%2==0)
    {
        return p;
    }
    else {
        return p*a;
    }
}
int power(int a,int n)
{
    return n==0?1:a*power(a,n-1);
}
void bubble_sort(int a[],int n)
{
    if(n==1)
    {
        return;
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }

    }
    bubble_sort(a,n-1);
}
void printdec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printdec(n-1);

}
void printinc(int n)
{
    if(n==0)
    {
        return;
    }

    printinc(n-1);
    cout<<n<<" ";
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,100,11,12,13,14,15,16,17,18,19,100,100,22,23,24};
int n=24;
cout<<linear_search(arr,n,100)+1<<endl;
cout<<last_occurence(arr,n,100)+1<<endl;
all_occurences(arr,0,n,100);
cout<<endl;
cout<<fast_power(5,2)<<endl;
cout<<power(5,2)<<endl;
bubble_sort(arr,24);
cout<<arr[0];
for(int i=1;i<24;i++)
{
    cout<<" , "<<arr[i];
}
cout<<endl;
printdec(20);
cout<<endl;
printinc(20);
cout<<endl;
return 0;
}