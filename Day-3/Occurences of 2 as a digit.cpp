/*
Count the number of 2s as digit in all numbers from 0 to n.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains the input integer n.

Output:
Print the count of the number of 2s as digit in all numbers from 0 to n.

Constraints:
1<=T<=100
1<=N<=10^5

Example:
Input:
2
22
100

Output:
6
20
*/




/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
long long int a=0,i,k;
for(k=0;k<number+1;k++)
{
    i=k;
    while(i!=0)
    {
        int b;
    b=i%10;
    if(b==2)
    {
        a++;
    }
    i=i/10;
    }
}
return a;
}