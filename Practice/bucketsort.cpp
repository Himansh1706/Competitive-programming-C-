#include<iostream>
#include<vector>
using namespace std;
class Student{
    public:
    int marks;
    string name;
};
void f(Student s[],int n)
{
    // assume marks between 0 -100
    vector<Student> v[101];
    for(int i=0;i<n;i++)
    {
        int m=s[i].marks;
        v[m].push_back(s[i]);
    }
    for(int i=100;i>=0;i--)
    {
    for(auto it=v[i].begin();it!=v[i].end();it++)
    {
        cout<<(*it).name<<" "<<(*it).marks<<endl;
    }
    }
}
int main()
{
    Student s[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].marks>>s[i].name;
    }
    f(s,n);

}