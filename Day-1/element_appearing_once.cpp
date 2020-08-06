/* Given an sorted array A[i] of N positive integers having all the numbers occuring exactly twice, except for one number which will occur only once. Find the number occuring only once.

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases
follow. The first line of each test case contains a positive integer N, denoting the size of the array.
The second line of each test case contains a N positive integers, denoting the elements of the
array.


Output
Print out the singly occuring number.
*/
#include <iostream>
#include<set>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,i;
	    cin>>n;
	  
	    set <int> s;
	    for(i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	          if(s.find(a)!=s.end())
	        {
	            s.erase(a);
	        }
	        else
	        {
	        s.insert(a);
	        }    
	    }
	    set<int>::iterator it;
	    it=s.begin();
	    
	   cout<<*(it)<<endl;
	}
	return 0;
}