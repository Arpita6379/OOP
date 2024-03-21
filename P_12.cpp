#include<iostream>
#include<iomanip>
using namespace std;
string calgrade(int m)
{
    string grade;
    if(m>=80)
            {grade="AA";}//tp[i]=10;}//{'r','t'}
        else if(m>=73&&m<80)
            {grade="AB";}//tp[i]=9;}
        else if(m>=66&&m<73)
            {grade="BB";}//m=8;}
        else if(m>=60&&m<66)
            {grade="BC";}//tp[i]=7;}
        else if(m>=55&&m<60)
            {grade="CC";}//tp[i]=6;}
        else if(m>=50&&m<55)
            {grade="CD";}//tp[i]=5;}
        else if(m>=45&&m<50)
            {grade="DD";}//tp[i]=4;}
        else
            {grade="FF";}//tp[i]=0;}
            return grade;
}
int calgp(int m)
{
    int gp;
    if(m>=80)
            //{grade="AA";}
            {gp=10;}//{'r','t'}
        else if(m>=73&&m<80)
            //{grade="AB";}
            {gp=9;}
        else if(m>=66&&m<73)
            //{grade="BB";}//m
            {gp=8;}
        else if(m>=60&&m<66)
            //{grade="BC";}//tp[i]
            {gp=7;}
        else if(m>=55&&m<60)
            //{grade="CC";}//tp[i]
            {gp=6;}
        else if(m>=50&&m<55)
            //{grade="CD";}//tp[i]
            {gp=5;}
        else if(m>=45&&m<50)
            //{grade="DD";}//tp[i]
            {gp=4;}
        else
            //{grade="FF";}//
            {gp=0;}
            return gp;
}
class result;
class student
{
    string id;
    string name;
    int sem;
public:
    void getdata_stu()
    {
       cout<<"Enter id:"<<endl;
       cin>> id;
       cout<<"Enter name:"<<endl;
       cin>>name;
       cout<<"Enter sem:"<<endl;
       cin>>sem;
    }
   void putdata_stu()
    {
        cout<<endl;
    cout<<setw(15);
    cout<<left<<"Student ID"<<":  "<<id<<endl;
    cout<<setw(15);
    cout<<left<<"Student name"<<":  "<<name<<endl;
    cout<<setw(15);
    cout<<left<<"Semester"<<":  "<<sem<<endl;
    cout<<setw(25);
    }
    void getdata_result(result &);
    void putdata_result(result &);
};
class result
{
    string sub[3];
    int tc[3];
    int pc[3];
    int tm[3];
    int pm[3];
    string tgrade[3];
    string pgrade[3];
    int tgp[3];
    int pgp[3];
    float sgpa;
    int TC=0;
public:


    float calsgpa()
    {
                float sgpa=0.0;

    float total=0;

    for(int y=0;y<3;y++)
    {
        total=total+(tc[y]*tgp[y])+(pc[y]*pgp[y]);
    }

    sgpa=(float)total/(float)TC;
    return sgpa;
    }

    friend void student::getdata_result(result &r);
    friend void student::putdata_result(result &r);
};

    void student :: getdata_result(result &r)
    {
        cout<<"Enter 3 subjects name and credit(t&p):"<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>r.sub[i];
            cout<<"Credit"<<endl;
            cin>>r.tc[i]>>r.pc[i];
            r.TC+=r.tc[i]+r.pc[i];

        }
        cout<<"Enter marks(t/p)"<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>r.tm[i];
            r.tgrade[i]=calgrade(r.tm[i]);
            r.tgp[i]=calgp(r.tm[i]);
            cin>>r.pm[i];
            r.pgrade[i]=calgrade(r.pm[i]);
            r.pgp[i]=calgp(r.pm[i]);
        }
    }
    void student :: putdata_result(result &r)
    {
        cout<<"\t\t\t   Theory     Practical"<<endl;
    for(int q=0;q<3;q++)
    {
        cout<<setw(29);
        cout<<r.sub[q]<<r.tgrade[q]<<"\t\t"<<r.pgrade[q]<<endl;
        //cout<<setw(10);
        //cout<<grade_p[q]<<endl;
    }

    float total=0;

    for(int y=0;y<3;y++)
    {
        total=total+(r.tc[y]*r.tgp[y])+(r.pc[y]*r.pgp[y]);
    }

    r.sgpa=(float)total/(float)r.TC;
    cout<<endl;
    cout<<setw(15);
    cout<<left<<"SGPA"<<":  "<<setprecision(3)<<r.sgpa<<endl<<"\n\n\n";
    }


int main()
{
    result r;
    student s;
    s.getdata_stu();
    s.putdata_stu();
    s.getdata_result(r);

    s.putdata_result(r);

}
