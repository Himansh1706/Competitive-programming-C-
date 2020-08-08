/*
Generate all prime numbers between two given numbers.

Input:

The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing two space separated integers m and n.
Output:

For every test case print all prime numbers p such that m <= p <= n, space separated. Separate the answers for each test case by a new line.

Constraints:
1<=T<=60
1 <= m <= n <= 100000,
n - m <= 100000

Example:

Input:

2

1 10

3 5

Output:

2 3 5 7

3 5
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
	    for(int i=a;i<b+1;i++)
	    {
	         int flag=0;
	         if(i==1 || i==4)
	         {
	             continue;
	         }
            for(int j=2;j<(i/2);j++)
            {
                if((i%j)==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<i<<" ";
                
            }
	    }
	    cout<<endl;
	}
	return 0;
}