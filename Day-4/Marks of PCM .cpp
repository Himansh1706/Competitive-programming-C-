/*
You are provided with marks of N students.
A student's Marks in Physics, Chemistry and Maths are provided to you.
You want to sort the Student's Numbers in ASCENDING Order of their Physics Marks.

Now, Once this is done, Only those students who have Same Marks in Physics have to be sorted in the DESCENDING order of their Chemistry Marks.

And now finally, Once this is done too. You need to Sort all those Students who have Same Marks in Physics and Chemistry in ASCENDING ORDER Of their Maths marks.

Input:
The First line contains an integer T, the number of testcases.
The first line of each testcase contains an integer N , the total number of students. 
The Next N lines each contains 3 integers P,C,M containing the Physics, Chemistry and Maths' marks of ith student.

Output:
Print the Required Sorted Array of Marks.

Note: While swapping two student's data(while sorting), you need to swap all the P,C,M marks of the students. That is You need to swap the whole tuple in a swap and not just the marks of any 1 subject.

Constraints:
1<=T<=10
1<= N <=10000
1<=Pi,Ci,Mi<=1000

Example:
Input:
1
10
4 5 12
1 2 3
10 9 6
4 6 5
4 3 2
4 10 10
1 2 16
10 9 32
1 14 10
10 10 4

Output:
1 14 10
1 2 3
1 2 16
4 10 10
4 6 5
4 5 12
4 3 2
10 10 4
10 9 6
10 9 32


Explanation:

First of all See that the Physics marks are indeed in Ascending Order= 1,1,1,4,4,4,4,10,10,10
Now, For the First three students whose Physics marks are in sorted order Their Chemistry Marks Need to be in Descending order (14,2,2) (10,6,5,3) and (10,9,9)
1 14 10
1 2 3
1 2 16

4 10 10
4 6 5
4 5 12
4 3 2

10 10 4
10 9 6
10 9 32

Now for those students having same Pi and Ci have their Maths marks in Ascending order: (3,16) , (6,32).
10 9 6
10 9 32

*/

#include<bits/stdc++.h>
using namespace std;
class subject
{
    public:
        long int p,c,m;
};
bool compare(subject s1 , subject s2 )
{
    
    if(s1.p<s2.p) 
      return true;
    if(s1.p>s2.p) 
      return false;
    if(s1.p==s2.p)
    {
        
        if(s1.c<s2.c) 
          return false;
        if(s1.c>s2.c) 
          return true;
        if(s1.c==s2.c)
        {
            
            if(s1.m<s2.m) 
              return true;
            if(s1.m>s2.m) 
            return false;
        }
        
    }
    return false;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        subject marks[n];
        for(int i=0;i<n;i++)
        {
            cin>>marks[i].p>>marks[i].c>>marks[i].m;
        }
        std::sort(marks,marks+n, compare);
        for(int i=0;i<n;i++)
        {
            cout<<marks[i].p<<" "<<marks[i].c<<" "<<marks[i].m<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}