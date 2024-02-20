#include<iostream>
using namespace std;
int count=0;
class abc
{
    int r;
    float area;
    public:
    abc()
    {
        r=1;count++;
    }
    abc(int radius)
    {
       r= radius;count++;
    }
    abc(abc &sample)
    {
       r=sample.r;
       area=3.14*r*r;
        cout<<"Area = "<<area<<endl;count++;
        //countofobject();

    }
    display()
    {
        cout<<"r = "<<r<<endl;
        area=3.14*r*r;
        cout<<"Area = "<<area<<endl;
        countofobject();
    }
    countofobject()
    {
        cout<<"Count of Object: "<<count<<endl;
    }
    ~abc()
    {
        cout<<"Object destroyed"<<endl;
        count--;
        countofobject();

    }
};
int main()
{
    abc o1;
    o1.display();
    abc o2(5);
    o2.display();
    abc o3(o2);
    o3.display();
    //delete o3;
    //delete o2;
    //delete o1;

}
