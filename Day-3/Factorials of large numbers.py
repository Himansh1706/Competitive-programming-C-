"""
Given an integer, the task is to find factorial of the number.
 
Input:
The first line of input contains an integer T denoting the number of test cases.  
The first line of each test case is N,the number whose factorial is to be found
 
Output:
Print the factorial of the number in separate line.
 
Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
 
Example:
Input
3
5
10
2
 
Output
120
3628800
2
"""

#code
import math
n=int(input())
for i in range(n):
    a=int(input())
    print(math.factorial(a))

