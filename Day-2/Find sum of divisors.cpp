/*
Given a natural number n, the task is to find sum of divisors of all the divisors of n
Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer n.

Output:
For each test case in a new line print the required output.

Constraints:
1 <= T <= 100
1 <= n <= 100

Example:
Input:
2
54
10
Output:
232
28
*/
#include <iostream>
using namespace std;
#include<bits/stdc++.h> 
using namespace std; 
  
// Returns sum of divisors of all the divisors 
// of n 
int sumDivisorsOfDivisors(int n) 
{ 
    // Calculating powers of prime factors and 
    // storing them in a map mp[]. 
    map<int, int> mp; 
    for (int j=2; j<=sqrt(n); j++) 
    { 
        int count = 0; 
        while (n%j == 0) 
        { 
            n /= j; 
            count++; 
        } 
  
        if (count) 
            mp[j] = count; 
    } 
  
    // If n is a prime number 
    if (n != 1) 
        mp[n] = 1; 
  
    // For each prime factor, calculating (p^(a+1)-1)/(p-1) 
    // and adding it to answer. 
    int ans = 1; 
    for (auto it : mp) 
    { 
        int pw = 1; 
        int sum = 0; 
  
        for (int i=it.second+1; i>=1; i--) 
        { 
            sum += (i*pw); 
            pw *= it.first; 
        } 
        ans *= sum; 
    } 
  
    return ans; 
} 
  

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,i;
	    cin>>n;
	    cout << sumDivisorsOfDivisors(n)<<endl; 
	    
	}
	
	return 0;
}
