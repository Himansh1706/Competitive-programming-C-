#include<iostream>
using namespace std;
void tower(int n,char source,char dest,char help)
{
	if(n==0)
	{
		return ;
	}
	tower(n-1,source,help,dest);
	cout<<"Moving ring "<<n<<" from "<<source<<" to "<<dest<<endl;
	tower(n-1,help,dest,source);
}
int main() {
	int n;
	cin>>n;
	tower(n,'A','B','C');
	return 0;
}