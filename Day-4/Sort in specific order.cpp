/*
Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

Output:
For each test case in a new line print the space separated values of the modified array.

Constraints:
1 <= T <= 103
1 <= N <= 107
0 <= Ai <= 1018

Example:
Input:
2
7
1 2 3 5 4 7 10
7
0 4 5 3 7 2 1

Output:
7 5 3 1 2 4 10
7 5 3 1 0 2 4

Explanation:
Testcase1: Array elements 7 5 3 1 are odd and sorted in descending order, whereas 2 4 10 are even numbers and sorted in ascending order.
*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    
    while(t--)
    {
        ll n,a; cin>>n;
        vector<ll>v1,v2;
        while(n--)
        {
            cin>>a;
            if(a%2==0)
            v1.push_back(a);
            else
            v2.push_back(a);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        for(int i=v2.size()-1;i>=0;i--)cout<<v2[i]<<" ";
        for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
        cout<<endl;
    }
}