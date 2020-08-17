#include<iostream>
#include<string.h>
using namespace std;
void remove_duplicates(char a[])
{
    int i=0,n=strlen(a);
    if(n==1 || n==0)
    {
        return;
    }
    for(int current=1;current<n;current++)
    {
        if(a[i]!=a[current])
        {
             i++;
             a[i]=a[current];
        }
    }
    a[++i]='\0';

}
int main()
{
    char a[1000];
    cin.getline(a,1000);
    remove_duplicates(a);
    cout<<a;
    return 0;
}