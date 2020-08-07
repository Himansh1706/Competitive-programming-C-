/* 
Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number K.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the count of required subarrays in new line.

Constraints:
1<=T<=200
1<=N<=105
1<=K<=1015
1<=A[i]<=105

Example:
Input:
2
4 10
1 2 3 4
7 100
1 9 2 8 6 4 3

Output:
7
16
*/
#include<bits/stdc++.h>
using namespace std;
#define fi(i,l,n) for(int i=l;i<n;i++)
#define fd(i,n,l) for(int i=n-1;i>=l;i--)
#define ci cin>>
#define co cout<<
#define ll long long int
const int inf = 1e9+7;
 ll numSubarrayProductLessThanK(vector<int>& nums, ll k) {
      ll res=0;
       ll num=1;
       int n=nums.size();
      int i=0,j=0;
      while(j<n){
          num=num*nums[j];
          j++;
          while(num>=k){
              num/=nums[i];
              i++;
          }
          res+=j-i;
      }
       return res;
    }
int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  ci t;
  while(t--){
    ll n,k;
    ci n>>k;
    vector<int>a(n);
    fi(i,0,n)
    ci a[i];
      cout<<numSubarrayProductLessThanK(a,k)<<endl;
  }
 }
