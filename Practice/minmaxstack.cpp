#include<iostream>
using namespace std;
class minmaxstack
{
    vector<int> s;
    vector<int> s_max;
    vector<int> s_min;
public:
    int top()
    {
        return s[s.size()-1];
    }
    void push(int data)
    {
        s.push_back(data);
        if(data>s_max[s_max.size()-1])
        {
            s_max.push_back(data);
        }
        else
        {
            s_max.push_back(s_max[s_max.size()-1]);
        }
        if(data<s_min[s_min.size()-1])
        {
            s_min.push_back(data);
        }
        else
        {
            s_min.push_back(s_min[s_min.size()-1]);
        }

    }
    void pop()
    {
        s.pop_back();
        s_max.pop_back();
        s_min.pop_back();
    }

};
