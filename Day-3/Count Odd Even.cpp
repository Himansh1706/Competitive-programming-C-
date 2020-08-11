/*
Congrats on completing Module 1.

In the previous module we learnt about the basics of CPP.  Now, we'll move to more complex stuff. Here, we'll learn about arrays.

Given an array A of N elements. The task is to count number of even and odd elements in the array.

Input:
First line of input contains number of testcases T. For each testcase, there will be two line of input, first line of which contains N and next line contains N array elements.

Output:
For each testcase, print the number of odd elements first and then number of even elements seperated by space in a single line.

User Task:
Your task is to complete the function countOddEven() which should print number of odd and number of even elements in a single line seperated by space.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 106

Example:
Input:
1
5
1 2 3 4 5

Output:
3 2
*/


//User function Template for C++

/*Function to count even and odd elements in the array
* arr : Array with its elements
* sizeof_array : number of array elements
* countOdd : variable to count number of odd elements
* countEven : variable to count number of even elements
*/
void countOddEven(int arr[], int sizeof_array)
{
    
   int even=0,odd=0,n=sizeof_array;
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
           even++;
       }
       else{
           odd++;
       }
   }
    cout<<odd<<" "<<even<<endl;
}