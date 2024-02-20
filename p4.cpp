#include<iostream>
using namespace std;
class abc
{
   public:
       float area(float a)
       {
           return (3.14*a*a);
       }
       float area(float a,float b)
       {
           return (a*b);
       }
       float area(float a,float b,float c)
       {
           return (a*b*c);
       }
};
int main()
{
    abc abc1;
    //circle,rectangle,cuboid
    float r,l,b,h;
    cout<<"Enter radius of a circle:"<<endl;
    cin>>r;
    cout<<abc1.area(r)<<endl;
    cout<<"Enter length and width of a rectangle:"<<endl;
    cin>>l>>b;
    cout<<abc1.area(l,b)<<endl;
    cout<<"Enter length,height and width of a rectangle:"<<endl;
    cin>>l>>b>>h;
    cout<<abc1.area(l,b,h)<<endl;


}
