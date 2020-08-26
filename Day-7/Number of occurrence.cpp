/*
Given a sorted array A of size N and a number X, you need to find the number of occurrences of X in A.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input: The first line contains N and X(element whose occurrence needs to be counted). The second line contains the elements of the array separated by spaces.

Output:
For each testcase, print the count of the occurrences of X in the array, if count is zero then print -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 103
1 <= X <= 103

Example:
Input:
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
Output:
4
-1

Explanation:
Testcase 1: 2 occurs 4 times in 1 1 2 2 2 2 3
Testcase 2: 4 is not present in 1 1 2 2 2 2 3
*/

#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long int


int main() {
	//code
	ll t;
	cin>>t;
	for(ll l=0;l<t;l++)

{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll lb=(lower_bound(arr,arr+n,k)-arr);
    ll ub=(upper_bound(arr,arr+n,k)-arr);
    ll a=ub-lb;
    if(a==0)
    {
        cout<<-1<<endl;
    }
    else{
    cout<<a<<endl;}
}
	
	return 0;
}