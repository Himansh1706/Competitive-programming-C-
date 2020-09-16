#include<iostream>
#include<cstring>
using namespace std;
class Car{
    public:
    int model_no;
    char name[10];
    float price;
    public:
    Car(int a,char *n,float p)
    {
        model_no=a;
        strcpy(name,n);
        price=p;
    }
    void print()
    {
        cout<<name<<"        Model_no      "<<model_no<<"       price       "<<price<<endl; 
    }

};
int main()
{
    Car c(89,"Audi",900);
    c.print();
    return 0;
}