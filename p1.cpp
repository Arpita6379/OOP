#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;

void getdata()
{
    char name[10];
    int sem;
    char id[8];cout<<"Enter id ,name and sem."<<endl;
    cin>>id>>name>>sem;
    char sub[3][30];cout<<"Enter 3 subjects name."<<endl;
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
       cin.getline(sub[i],30);
    }
    int tm[3];
    int pm[3];cout<<"Enter theory and practical marks."<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>tm[i];
        cin>>pm[i];

    }
    string grade_t[3];
    string grade_p[3];
    int tp[3];
    int pp[3];

    for(int i=0;i<3;i++)
    {
        if(tm[i]>=80)
            {grade_t[i]="AA";tp[i]=10;}//{'r','t'}
        else if(tm[i]>=73&&tm[i]<80)
            {grade_t[i]="AB";tp[i]=9;}
        else if(tm[i]>=66&&tm[i]<73)
            {grade_t[i]="BB";tp[i]=8;}
        else if(tm[i]>=60&&tm[i]<66)
            {grade_t[i]="BC";tp[i]=7;}
        else if(tm[i]>=55&&tm[i]<60)
            {grade_t[i]="CC";tp[i]=6;}
        else if(tm[i]>=50&&tm[i]<55)
            {grade_t[i]="CD";tp[i]=5;}
        else if(tm[i]>=45&&tm[i]<50)
            {grade_t[i]="DD";tp[i]=4;}
        else
            {grade_t[i]="FF";tp[i]=0;}
    }
    for(int i=0;i<3;i++)
    {
        if(pm[i]>=80)
            {grade_p[i]="AA";pp[i]=10;}
        else if(pm[i]>=73&&pm[i]<80)
            {grade_p[i]="AB";pp[i]=9;}
        else if(pm[i]>=66&&pm[i]<73)
            {grade_p[i]="BB";pp[i]=8;}
        else if(pm[i]>=60&&pm[i]<66)
            {grade_p[i]="BC";pp[i]=7;}
        else if(pm[i]>=55&&pm[i]<60)
            {grade_p[i]="CC";pp[i]=6;}
        else if(pm[i]>=50&&pm[i]<55)
            {grade_p[i]="CD";pp[i]=5;}
        else if(pm[i]>=45&&pm[i]<50)
            {grade_p[i]="DD";pp[i]=4;}
        else
            {grade_p[i]="FF";pp[i]=0;}
    }
    float sgpa=0.0;int TC=0;
    int tc[3];float total=0;
    int pc[3];cout<<"Enter theory and practical credit."<<endl;
    for(int k=0;k<3;k++){
        cin>>tc[k]>>pc[k];TC=TC+tc[k]+pc[k];
    }
    for(int y=0;y<3;y++)
    {
        total=total+(tc[y]*tp[y])+(pc[y]*pp[y]);
    }
   /* for(int y=0;y<3;y++)
    {
        total=total+(pc[y]*pp[y]);
    }*/
    sgpa=(float)total/(float)TC;
    system("cls");
    cout<<endl;
    cout<<setw(15);
    cout<<left<<"Student ID"<<":  "<<id<<endl;
    cout<<setw(15);
    cout<<left<<"Student name"<<":  "<<name<<endl;
    cout<<setw(15);
    cout<<left<<"Semester"<<":  "<<sem<<endl;
    cout<<setw(25);
    //cout<<"Theory";
    //cout<<setw(10);
    cout<<"\t\t\t   Theory     Practical"<<endl;
    for(int q=0;q<3;q++)
    {
        cout<<setw(29);
        cout<<sub[q]<<grade_t[q]<<"\t\t"<<grade_p[q]<<endl;
        //cout<<setw(10);
        //cout<<grade_p[q]<<endl;
    }

    cout<<endl;
    cout<<setw(15);
    cout<<left<<"SGPA"<<":  "<<setprecision(3)<<sgpa<<endl<<"\n\n\n";


}
//void displaydata()



int main()
{

    getdata();
}
