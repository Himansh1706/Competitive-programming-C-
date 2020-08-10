/*
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].

Input:
The first line contains an integer T, depicting total number of test cases.  Then T test case follows. First line of each test case contains an integer N denoting the size of the array. Next line contains N space separated integeres denoting the elements of the array.

Output:
Print the maximum difference of the indexes i and j in a separtate line.

Constraints:
1 ≤ T ≤ 1000
1 ≤ N ≤ 103
0 ≤ A[i] ≤ 1018

Example:
Input:
1
9
34 8 10 3 2 80 30 33 1

Output:
6

Explanation:
Testcase 1:  In the given array A[1] < A[7] satisfying the required condition(A[i] <= A[j]) thus giving the maximum difference of j - i which is 6(7-1). 
*/


#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    unsigned long N;
	    cin>>N;
	    unsigned long long *A = new unsigned long long[N];
	    for(unsigned long i=0; i<N; i++)
	    {
	        cin>>A[i];
	    }
	    unsigned long *minAIndex = new unsigned long[N];
	    minAIndex[0] = 0;
	    for(unsigned long i=1; i<N; i++)
	    {
	        minAIndex[i] = A[i] < A[minAIndex[i-1]] ? i : minAIndex[i-1];
	    }
	    unsigned long *maxAIndex = new unsigned long[N];
	    maxAIndex[N-1] = N-1;
	    for(unsigned long i=N-1; i>0; i--)
	    {
	        maxAIndex[i-1] = A[i-1] > A[maxAIndex[i]] ? i-1 : maxAIndex[i];
	    }
	    unsigned long indexDifferenceMax = 0;
	    for(unsigned long i=0, j=0; i<N && j<N;)
	    {
	        if(A[minAIndex[i]] <= A[maxAIndex[j]])
	        {
	            indexDifferenceMax = max(indexDifferenceMax, j-i);
	            j++;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    cout<<indexDifferenceMax<<endl;
	    delete []A;
	    delete []minAIndex;
	    delete []maxAIndex;
	}
	return 0;
}