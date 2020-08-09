/*
Given an integer N, find the number of ways we can choose 3 numbers from {1,2,3…,N} such that their sum is even.

Input:
The first line of the test case contains an integer T denoting number of test cases. Following T line contains an integer N each.

Output:
Print the answer under modulo 109+7.

Constraints:

1 <= T <= 100
3 <= N <= 106

Example:-
Input:
2
3
4
Output:
1
2
*/

#include<iostream>
#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
 {  
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
        ll n;
        
        cin>>n;
        ll c=0;
        ll e,o;
        if(n&1)
        o=n/2+1;
        else
        o=n/2;
        e=n/2;
        c=(c+(((o)*(o-1))/2)*e)%1000000007;
        c=(c+((e)*(e-1)*(e-2))/6)%1000000007;
        cout<<c<<endl;
    }
}