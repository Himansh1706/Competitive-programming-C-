#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> nums{2,7,11,15};
    int target=9;
      vector<int> v;
        for(int it=0;it<nums.size();it++)
        {
            for(int ut=it+1;ut<nums.size();ut++)
            {
                if((nums[it]+nums[ut])==target)
                {
                     v.push_back(it);
                     v.push_back(ut);
                    break;
                }
            }
        }
        for(int ut=0;ut<v.size();ut++)
            {
                cout<<v[ut];
            }
            return 0;
}