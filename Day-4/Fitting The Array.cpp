/*
Adobe is playing an array game. He is weak in the concepts of arrays. Adobe is given two arrays a[ ] and b[ ] of the same size. The array a[ ] will be said to fit in array b[ ] if by arranging the elements of both array, there exists a solution such that i_th element of a[ ] is less than or equal to an i_th element of b[ ]. Help Adobe find if the given arrays are fit or not.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case, the next subsequent line contains the integer N i.e. size of arrays followed by array a[ ] and then array b[ ].

Output:
Print "YES" if array a[ ] fit in array b[ ] otherwise print "NO".

Constraints:
1<= T<= 100
1<= N<= 100
0<=a[ i ]<=1000
0<= b[ i ]<=1000

Example:
Input
2
4
7 5 3 2 
5 4 8 7
8
7 5 3 2 5 105 45 10
2 4 0 5 6 9 75 84
Output
YES
NO

** For More Input/Output Examples Use 'Expected Output' option **
Contributor: Siddhant Manglik
Author: adobe_
*/

#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n; int a[n],b[n],c=0;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++) cin>>b[i];
	    sort(a,a+n); sort(b,b+n);
	    for(int i=0;i<n;i++) {if(a[i]>b[i]) c++;}
	    if(c==0) cout<<"YES"<<endl;
	    if(c>0) cout<<"NO"<<endl;
	}
	return 0;
}