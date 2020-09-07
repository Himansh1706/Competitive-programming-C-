#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a="batman";
    string b="bat";
    
  

	int x=a.size();
	int y=b.size();
	if(x>y)
	{
		string c=a.substr(0, y);
		if(c==b)
		{
			cout<<"yoyo";
		}
	}
	else{
		string c=b.substr(0,x);
		if(c==b)
		{
			cout<<"popo";
		}
	}

    return 0;
}