#include<iostream>
using namespace std;
int main()
{
    char a[]={'a','b','c'};
    char a1[]="abc";
    cout<<sizeof(a)<<"   "<<a<<endl;
    cout<<sizeof(a1)<<"   "<<a1<<endl;
    char a5[1000];
    cin.getline(a5,1000,'k');   // read upto delima that is'k'
    
    cout<<a5<<endl;


    return 0;
}