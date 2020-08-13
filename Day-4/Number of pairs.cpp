/*
Given two arrays X and Y of positive integers, find number of pairs such that xy > yx (raised to power of) where x is an element from X and y is an element from Y.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test consists of three lines. The first line of each test case consists of two space separated M and N denoting size of arrays X and Y respectively. The second line of each test case contains M space separated integers denoting the elements of array X. The third line of each test case contains N space separated integers denoting elements of array Y.

Output:
Corresponding to each test case, print in a new line, the number of pairs such that xy > yx.

Constraints:
1 ≤ T ≤ 100
1 ≤ M, N ≤ 105
1 ≤ X[i], Y[i] ≤ 103

Example:
Input
1
3 2
2 1 6
1 5

Output
3

Explanation:
Testcase 1: T
he pairs which follow xy > yx are as such: 21 > 12,  25 > 52 and 61 > 16

Hints 
The trick to this question is if y > x, then then x^y > y^x with some exceptions.

Simply sort the array Y[], and for every element x in X[], find the index idx of smallest number just greater than x in Y[]. 
All the elements after, this index idx satisfy the above relation. So add (n - idx) to the ans.

But as we mentioned there are some exceptions. Try to think of these exceptions.

Following are the exceptions :

if x = 0, then count for this is 0.
 if x = 1, then count is total no of 0s in Y[] only.
if x = 2, for y = 3, y = 4, the above property does not hold, and the count should be decreased
if x = 3, for x = 2, the count need to be inreased
This is the complete solution.
The overall time complexity is O(nlong + mlogn)

*/

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    long long int m,n;
	    cin>>m>>n;
	    long long int x[m],y[n],count=0;
	    for(long long int i=0;i<m;i++)
	    {
	        cin>>x[i];
	    }
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>y[i];
	    }
	     for(long long int i=0;i<m;i++)
	    {
	        if(x[i]==0)
	        {
	            continue;
	        }
	        if(x[i]==1)
	        {
	            for(long long int j=0;j<n;j++)
	                {
	                   if(y[j]==0)
	                        {
	                            count++;
	                       }
	                }
	        }
	        if(x[i]==2)
	        {
	            if(y[i]==3 || y[i]==4)
	            {
	                continue;
	            }
	            else {
	                for(long long int j=0;j<n;j++)
	                {
	                   if(y[j]>x[i])
	                        {
	                            count++;
	                       }
	                }
	            }
	        }
	     if(x[i]==3)
	     {
	         for(long long int j=0;j<n;j++)
	                {
	                   if(y[j]==2)
	                        {
	                            count++;
	                       }
	                       else if(y[j]>x[i])
	                       {
	                           count++;
	                       }
	                }
	     }
	     else 
	     {
	         for(long long int j=0;j<n;j++)
	                {
	                   if(y[j]>x[i])
	                        {
	                            count++;
	                       }
	                }
	     }
	    }
	    cout<<count<<endl;
	}
	return 0;
}