/*
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

Example
Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2

Input:
The first line of input is an integer T denoting the no of test cases.Then T test cases follow. Each test case consists of 2 lines . The first line of each test case is are two integers row and col denoting the no of rows and columns of matrix . Then in the next line are row*col space separated values of the matrix M.

Output:
For each test case in a new line print the required first row index .

Constraints:
1<=T<=20
1<=row,col<=40
0<=M[ ][ ]<=1

Example:
Input:
2
3 4
0 1 1 1 0 0 1 1 0 0 1 1
2 2
0 1 1 1
 
Output:
0
1
*/


#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int a,b;
	    cin>>a>>b;
	    int arr[a][b];
	    int sum=0,row,max=0;
	    for(int i=0;i<a;i++)
	    {
	        sum=0;
	        for(int j=0;j<b;j++)
	        {
	            
	            cin>>arr[i][j];
	            if(arr[i][j]==1)
	            {
	                sum++;
	            }
	            
	        }
	        if(sum>max){
	            row=i;
	            max=sum;
	        }
	    }
	    cout<<row<<endl;
	}
	return 0;
}