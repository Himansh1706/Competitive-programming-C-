/*
Given a matrix C of size N x M. You are given position of submatrix as X1, Y1 and X2, Y2 inside the matrix. Find the sum of all elements inside that submatrix.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is n and m,n is the number of rows and m is the number of columns. The second line of each test case contains C[N][M]. The third line contains four value of X1, Y1, X2, Y2. X1, Y1 is the top left cell and X2, Y2 is the bottom right cell.

Output:
Print the sum of all elements inside that submatrix.

Constraints:
1 ≤ T ≤ 15
1 ≤ N, M ≤ 103
1 ≤ C[N][M] ≤ 106
1 <= X1, Y1, X2, Y2 <= M

Example:
Input:
2
5 6
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
3 4 4 5
3 3
9 8 7 4 2 1 6 5 3
1 2 3 3

Output:
78
26
*/

#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n+1][m+1];
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<m+1;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int sum=0,x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    for(int i=x1;i<=x2;i++)
	    {
	        for(int j=y1;j<=y2;j++)
	        {
	            sum+=arr[i][j];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}