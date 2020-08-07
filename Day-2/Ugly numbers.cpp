/* 
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. For each testcase there is one line of input that contains the number N.

Output:
Print the Nth Ugly Number.

Constraints:
1 ≤ T ≤ 104
1 ≤ N ≤ 104

Example:
Input:
2
10
4
Output:
12
4
*/

#include <iostream>
#include<set>

#include<vector>
using namespace std;
int main()
{
set<long> s ;
s.insert(1) ;
auto it = s.begin() ;
vector<long> v ;
while(v.size() < 10001){
long long x = *it;
v.push_back(x) ;
s.insert(x*2) ;
s.insert(x*3) ;
s.insert(x*5) ;
it++;
}
int t ;
cin >> t ;
while(t--){
int n ;
cin >> n ;
cout << v[n-1] << '\n' ;
}
return 0;
}

