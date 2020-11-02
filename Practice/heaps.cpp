#include<iostream>
using namespace std;
class heaps
{
    vector<int> v;
    bool minheap;
    bool compare(int a,int b)
    {
        if(minheap)
        {
            return a<b;
        }
        else 
        {
            return a>b;
        }
    }
    void heapify(int idx)
    {
        int left=idx*2;
        int right=left+1;
        int s=v.size()-1;
        int min_idx=idx;
        if(left<=s && compare(v[left],v[idx]))
        {
            min_idx=left;
        }
        if(right>=s && compare(v[right],v[min_idx]))
        s{
            min_idx=right;
        }
        if(min_idx!=idx)
        {
            swap()
        }
        )

    }
    public:
    heaps(int default_size=10,bool type=true)
    {
        v.reserve(default_size);
        v.push_back(-1);
        minheap=type;
    }
    void push(int d)
    {
        v.push_back(d);
        int idx=v.size()-1;
        int parent=idx/2;
        while(idx>1 && compare(v[idx],v[parent]))
        {
            swap(v[idx],v[parent]);
            idx=parent;
            parent=parent/2;
        }
    }
};
int main()
{

}