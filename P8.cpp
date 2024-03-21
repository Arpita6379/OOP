#include<iostream>
//#inclued<string.h>
#include<iomanip>
using namespace std;
class nont_emp;
class t_emp;
class employee
{
      int ID;
      string name;
      char q[15];
      //string q;
      float exp;
      static float av_ex;
      static int total;
      long int contact;

  protected:
    getempdata()
    {
        total++;
          cout<<"Enter an employee id:"<<endl;
          cin>>ID;fflush(stdin);
          cout<<"Enter Employee name:"<<endl;
          cin>>name;
          fflush(stdin);
          cout<<"Enter Qualification:"<<endl;
          //cin>>q;
          cin.getline(q,15);fflush(stdin);
          cout<<"Enter experience:"<<endl;
          cin>>exp;av_ex=av_ex+exp;
          fflush(stdin);
          cout<<"Enter contact no.:"<<endl;
          cin>>contact;fflush(stdin);
    }
    putempydata()
    {
        fflush(stdout);
          cout<<"__________________________________"<<endl;
          cout<<endl;
          cout<<setw(15);
          cout<<left<<"Employee Name"<<": "<<name<<endl;fflush(stdout);
          cout<<setw(15);
          cout<<left<<"Qualification"<<": "<<q<<endl;fflush(stdout);
          cout<<setw(15);
          cout<<left<<"Experience"<<": "<<exp<<endl;fflush(stdout);
          cout<<setw(15);
          cout<<left<<"Contact Number"<<": "<<contact<<endl;fflush(stdout);
          cout<<endl;
          cout<<"__________________________________"<<endl;
          cout<<endl;fflush(stdout);
    }
    searchemp()
    {
        return ID;
    }
  public:
       static int  avgexp()
        {
            cout<<"Average experience of all employees is "<<(av_ex/total)<<" ."<<endl;
        }
};
class t_emp : public employee

{
    string designation;
    string speon;
    string pay_scale;
protected:

public:
    searchtemp()
    {
        int a=searchemp();
        return a;

    }
    gettempdata()
    {
        getempdata();
        cout<<"Enter designation of an Employee:"<<endl;
        cin>>designation;
        fflush(stdin);
        cout<<"Enter Employee's specilisation:"<<endl;
        cin>>speon;
        fflush(stdin);
        cout<<"Enter pay scale of an Employee:"<<endl;
        cin>>pay_scale;
        fflush(stdin);
    }
    void putempdata()
    {
        cout<<"_______________________________________"<<endl<<endl;
        putempydata();
        cout<<setw(15);
        cout<<left<<"Designation"<<": "<<designation<<endl;fflush(stdout);
        cout<<setw(15);
        cout<<left<<"Specilisation"<<": "<<speon<<endl;fflush(stdout);
        cout<<setw(15);
        cout<<left<<"pay scale"<<": "<<pay_scale<<endl;fflush(stdout);
        cout<<"_______________________________________"<<endl<<endl;
    }
};
class nont_emp : public employee
{
    int salary;
public:
    searchntemp()
    {
        int a=searchemp();
        return a;
    }
    getntempdata()
    {
        getempdata();
        cout<<"Enter salary of an non tech Employee:"<<endl;
        cin>>salary;
        fflush(stdin);
    }
    putntempydata()
    {
        cout<<"_______________________________________"<<endl<<endl;
        putempydata();
        cout<<setw(15);
        cout<<left<<"Salary"<<": "<<salary<<endl;fflush(stdout);
        cout<<"_______________________________________"<<endl<<endl;
    }
};
float employee :: av_ex;///declare static variable
int employee :: total;

int main()
{
    int tn;
    cout<<"Enter no. of tech employee:"<<endl;
    cin>>tn;
    t_emp emp[tn];
    for(int i=0;i<tn;i++)
    {
        cout<<"Enter detail of tech  employee "<<i+1<<":"<<endl;
        emp[i].gettempdata();
    }
    int ntn;
    cout<<"Enter no. of non-tech employee:"<<endl;
    cin>>ntn;
    nont_emp empi[ntn];
    for(int i=0;i<ntn;i++)
    {
        cout<<"Enter detail of Non-tech  employee "<<i+1<<":"<<endl;
        empi[i].getntempdata();
    }

    int id;
    char c;int v;int a;
    int flag=0;

    do
    {
        cout<<"Enter an employee id:";
        cin>>id;
        flag=0;
       for(v=0;v<tn;v++)
       {

           a=emp[v].searchtemp();
           //cout<<"ss"<<a<<endl;
           if(a==id)
           {
                //cout<<"ffine"<<a<<endl;
               flag=1;
               //cout<<"flag set:";
               emp[v].putempdata();
               //cout<<"called:";
               break;
           }
       }
       if(flag==0)
       {
          for(v=0;v<ntn;v++)
       {

           a=empi[v].searchntemp();
           if(a==id)
           {
               flag=1;
               empi[v].putntempydata();break;
           }
       }
       }
       if(flag==0)
       {
           cout<<"**********************************"<<endl<<endl;
           cout<<"ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl;
           cout<<"**********************************"<<endl<<endl;
       }

       cout<<"Press Y to get another employee detail, Press N to exit:";
       cin>>c;
    }while(c=='y'||c=='Y');
    cout<<endl;
    //emp[n-1].cal_avex();
    employee::avgexp();

}

