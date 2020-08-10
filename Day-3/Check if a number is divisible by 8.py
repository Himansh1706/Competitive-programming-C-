"""
Given a number n, check if it is divisible by 8.

Input:
The first line of the input contains an integer T denoting the number of test cases. For each test case, there is an integer n whose divisibility we need to check. 

Output:
For each test case, the output is 1 if the number is divisible by 8 else -1.

Constraints:
1 <= T <= 100
1 <= digits in n < 1000

Example:
Input:
2
16
15
Output:
1
-1
"""


#code
a=int(input())
for i in range(a):
    b=int(input())
    if(b%8==0):
        print(1)
    else:
        print(-1)
