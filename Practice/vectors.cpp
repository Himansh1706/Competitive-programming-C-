#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> d{1,2,3,4,5,6,7,8,9,10,11,12,13,14};
d.push_back(15);
cout<<d.size()<<endl;
cout<<d.capacity()<<endl;
d.clear();
if(d.empty())
{
    cout<<"empty"<<endl;;
}
d.push_back(123);
return 0;

}