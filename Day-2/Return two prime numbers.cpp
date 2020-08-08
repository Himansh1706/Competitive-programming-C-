/*
Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only first such pair. 

NOTE: A solution will always exist, read Goldbach’s conjecture. Also, solve the problem in linear time complexity, i.e., O(n).

Input:
The first line contains T, the number of test cases. The following T lines consist of a number each, for which we'll find two prime numbers.

Note: The number would always be an even number.

Output:
For every test case print two prime numbers space separated, such that the smaller number appears first. Answer for each test case must be in a new line.

Constraints:
1 ≤ T ≤ 70
2 < N ≤ 10000

Example:
Input:
5
74
1024
66 
8
9990

Output:
3 71
3 1021
5 61
3 5
17 9973

 
 */
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,i;
	    cin>>n;
	    for(i=0;i<n/2;i++)
	    {
	        int a=i,b=n-i;
	        
	          int flag=0,flag1=0;
	         if(a==1 || a==4 || b==1 || b==4)
	         {
	             continue;
	         }
            for(int j=2;j<(a/2);j++)
            {
                if((a%j)==0)
                {
                    flag=1;
                    break;
                }
            }
            for(int j=2;j<(b/2);j++)
            {
                if((b%j)==0)
                {
                    flag1=1;
                    break;
                }
            }
            if(flag1==0 && flag==0)
            {
                cout<<a<<" "<<b<<endl;
                break;
                
            }
	    }
	}
	return 0;
}