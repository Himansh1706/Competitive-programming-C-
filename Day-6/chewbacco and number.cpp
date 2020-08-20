#include<iostream>
using namespace std;
int main()
{
	
	// for(int i=0;i<n;i++)
	// int d=0,temp;
	
	// temp=x;
	// while(temp!=0)
	// {
	// 	d++;
	// 	temp=temp/10;
	// }
	
	// for(i=d-1;i>=0;i--)
	// {
	// 	t=x%10;
	// 	a[i]=t;
	// 	x=x/10;
	// }
    string a;
    cin>>a;
    int n=a.length();
	for(int j=0;j<n;j++)
	{
        if(j==0 && a[j]=='9')continue;
		if(a[j]>='5')
		{
			a[j]=(9-(a[j]-'0'))+'0';
		}
	}
	
	for(int j=0;j<n;j++)
	{
		cout<<a[j];
	}
	
}
