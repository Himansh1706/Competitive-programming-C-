/*
Given a matrix of m*n size, the task is to count all the rows in a matrix that are sorted either in strictly increasing order or in strictly decreasing order?

Examples:

Input : m = 4,  n = 5
        mat[m][n] = 1 2 3 4 5
                    4 3 1 2 6
                    8 7 6 5 4
                    5 7 8 9 10
Output: 3 
 

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines.
First line of each test case consist of two space separated integers M and N, denoting the number of element in a row and column respectively.
Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order.

Output:

Corresponding to each test case, print in a new line, count of sorted rows.

Constraints:
1<=T<=200
1<=N,M<=100

Example:

Input:
2
3 3
3 40 38 44 52 54 57 60 69
3 2
18 40 27 38 55 67
 

Output:
2
3

*/
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int m,n;
	    cin>>m>>n;
	    int arr[m][n];
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int count=0;
	    for(int i=0;i<m;i++)
	    {
	        int flag=0;
	        if(arr[i][0]>arr[i][1])
	        {
	        for(int j=0;j<n-1;j++)
	        {
	            if(arr[i][j]<=arr[i][j+1])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        {
	            count++;
	        }
	        }
	        else 
	        {
	             for(int j=0;j<n-1;j++)
	        {
	            if(arr[i][j]>=arr[i][j+1])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        {
	            count++;
	        }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
