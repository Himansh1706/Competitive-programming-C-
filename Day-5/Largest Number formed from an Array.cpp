/*
Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
In each separate line print the largest number formed by arranging the elements of the array in the form of a string.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 102
0 ≤ A[i] ≤ 103

Example:
Input:
2
5
3 30 34 5 9
4
54 546 548 60

Output:
9534330
6054854654
*/

#include <bits/stdc++.h>
using namespace std;
bool compare(string s1, string s2){
		
		return (stoi(s1+s2)>stoi(s2+s1));

}
int main(){


    //write your code here
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<string> v(n,"");
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	sort(v.begin(), v.end(),compare);
    	for(int i=0;i<n;i++){
    		cout<<v[i];
    	}
    	cout<<endl;
    }

    return 0;
}