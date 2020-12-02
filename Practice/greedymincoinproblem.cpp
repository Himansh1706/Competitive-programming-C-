#include<iostream>
#include<algorithm>
using namespace std;
int minnoofcoins(int coins[],int n,int money)
{
    if(money==0)
    {
        return 0;
    }
    int idx=upper_bound(coins,coins+n,money)-1-coins;
    money=money-coins[idx];
    return minnoofcoins(coins,n,money)+1;
}
int main()
{
    int coins[]={1,2,5,10,20,50,100,200,500,1000};
    int money=39;
    int n=10;
    cout<<minnoofcoins(coins,n,money);

}
