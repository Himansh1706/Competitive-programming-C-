#include<iostream>
using namespace std;
class car{
    public :
    char a;
    car(char b)
    {
        a=b;
        cout<<"constructer of "<<a<<" is called"<<endl;
    }
    ~car()
    {
    
        cout<<"destructer of "<<a<<" is called"<<endl;
    }
    

};
int main()
{
    car x('X');
    car y('Y');
    car z('Z');
    return 0;
}