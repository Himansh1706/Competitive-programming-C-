/*
Given an array if ‘n’ positive integers, count number of pairs of integers in the array that have the sum divisible by 4.

Input:

The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each test-case has two lines of the input, the first line contains an integer denoting the size of an array N and the second line of input contains N positive integers.
Output:

Print the number of pairs of integers in the array that have the sum divisible by 4.
Constraints:

1<=T<=100

1<=N<=100

1<=arr[]<=1000
Example:

Input:

2

5

2 2 1 7 5

5

2 2 3 5 6

Output:

3

4

*/

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int k=0;k<t;k++)
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(((arr[i]+arr[j])%4)==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
	return 0;
}