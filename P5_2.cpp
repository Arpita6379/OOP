#include<iostream>
using namespace std;
int count=0;
class abc
{
    float r;
    float area;
public:
    abc()
    {

        r = 1;
        count++;
    }
    abc(int ra)
    {
        r=ra;
        //r = 5;
        count++;
    }
    display()
    {
        cout<<"r = "<<r<<endl;
        area=3.14*r*r;
        cout<<"Area = "<<area<<endl;
        countofobject();
    }
    abc(abc &sample)
    {
       r=sample.r;
       area=3.14*r*r;
        cout<<"Area = "<<area<<endl;count++;
    }
    countofobject()
    {
        cout<<"Count of Object: "<<count<<endl;
    }
    ~abc()
    {
        //delete o1;
        cout<<"Object destroyed"<<endl;
        count--;
        countofobject();
    }
};
int main()
{
    //abc *o1= new abc();
    //abc o1=abc();
    abc *o1=new abc();
    o1->display();
    abc *o2=new abc(5);
    o2->display();
    abc *o3=new abc(*o2);
    o3->display();
    delete o1;
    delete o2;
    delete o3;
    /*abc *o2(5);
    o2.display();
    abc *o3(o2);
    o3.display();*/
}
