//GFG
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > v;
void floodfill(int x,int y,int color,int pixel,int m,int n)
{
    if(x>=m || y>=n || x<0 || y<0)
    {
        return;
    }
    if(v[x][y]!=pixel)
    {
        return;
    }
    if(v[x][y]==pixel)
    {
        v[x][y]=color;
    }
    floodfill(x+1,y,color,pixel,m,n);
    floodfill(x,y+1,color,pixel,m,n);
    floodfill(x-1,y,color,pixel,m,n);
    floodfill(x,y-1,color,pixel,m,n);
    }
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int m,n;
	cin>>m>>n;

	for(int i=0;i<m;i++)
	{
	    vector<int> a;
	    for(int j=0;j<n;j++)
	    {
	        int b;
	        cin>>b;
	        a.push_back(b);
	    }
	    v.push_back(a);
	}
	int x,y,color;
	cin>>x>>y>>color;
	int pixel=v[x][y];
	floodfill(x,y,color,pixel,m,n);
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cout<<v[i][j];
	    }
	}
	v.clear();
    cout<<endl;
	}

	return 0;
}
