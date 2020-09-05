#include<iostream>
using namespace std;
class vector
{
    int cs;
    int ms;
    int *arr;
    public:
    vector()
    {
        cs=0;
        ms=1;
        arr=new int[ms];
    }
    void push_back(int d)
    {
        if(cs==ms)
        {
            int *oldarr=arr;
            arr=new int[2*ms];
            ms=2*ms;
        for(int i=0;i<cs;i++)
        {
            arr[i]=oldarr[i];
        }
        delete[] oldarr;
        }
        arr[cs]=d;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    int front()
    {
        return arr[0];
    }
    int back()
    {
        return arr[cs-1];
    }
    bool empty()
    {
        return cs==0;
    }
    int capacity()
    {
        return ms;
    }
    int at(const int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int operator[](const int i)
    {
        return arr[i];
    }
};
