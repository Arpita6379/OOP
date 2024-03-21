#include<iostream>
using namespace std;
class complex
{
    float a,b;
public:
    void getdata()
    {
        cout<<"Enter real part:"<<endl;
        cin>>a;
        cout<<"Enter imaginary part:"<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<a;
        if(b>0)
            cout<<"+";
        cout<<b<<"i"<<endl;
    }
    complex operator+(complex&y)
    {
      complex temp;
      temp.a=a+y.a;
      temp.b=b+y.b;
      return temp;
    }
    complex operator-(complex&y)
    {
      complex temp;
      temp.a=a-y.a;
      temp.b=b-y.b;
      return temp;
    }
    complex operator*(complex&y)
    {
      complex temp;
      temp.a=(a*y.a)-(b*y.b);
      temp.b=(a*y.b)+(b*y.a);

      return temp;
    }
    complex operator/(complex&y)
    {
      complex temp;
      temp.a=((a*y.a)+(b*y.b))/((y.a)*(y.a)+(y.b)*(y.b));
      temp.b=((b*y.a)-(a*y.b))/((y.a)*(y.a)+(y.b)*(y.b));
      return temp;
    }
    complex operator!()
    {
      complex temp;
      temp.a=(-1)*a;
      temp.b=(-1)*b;
      return temp;
    }

};
int main()
{
    complex o1,o2,o3;
    o1.getdata();
    o2.getdata();
    cout<<"CHOOSE OPERATION:"<<endl;
    cout<<"(+) addition\n(-) addition\n(*) addition\n(/) addition\n(!) addition\n"<<endl;
    char c;
    cout<<"Enter your choice:\n"<<endl;
    cin>>c;
    switch(c)
    {
    case '+':
        o3=o1+o2;
        o3.display();
        break;
    case '-':
        o3=o1-o2;
        o3.display();
        break;
    case '*':
        o3=o1*o2;
        o3.display();
        break;
    case '/':
        o3=o1/o2;
        o3.display();
        break;
    case '!':
        o3=!o1;
        o3.display();
        o3=!o2;
        o3.display();
    }


}
