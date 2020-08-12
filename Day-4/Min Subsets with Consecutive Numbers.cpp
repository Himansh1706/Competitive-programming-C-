/*
Given an array of distinct positive numbers, the task is to calculate the minimum number of subsets (or subsequences) from the array such that each subset contains consecutive numbers.

Expected Time Complexity: O(N. log(N))
Expected Auxiliary Space: O(1)

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N, denoting the length of the array. Next line contains N space seperated integers of the array. 

Output:
For each test case output a new line denoting count of number of such subset's that contains consecutive numbers.

Your task:
You don't have to print anything, printing is done by the driver code itself. Complete the function numofsubset() and return the answer.

Constraints:
1<=T<=30
1<=N<=105

Example:
Input
2
10
100 56 5 6 102 58 101 57 7 103 
3
10 100 105

Output
3
3
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        ll arr[n+1];  for(ll i=0; i<n; i++)   cin>>arr[i];
        
        arr[n] = arr[n-1];
        ll cnt = 0;
        sort(arr, arr+n);
        for(ll i=1; i<=n; i++){
            if(arr[i] - arr[i-1] != 1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}