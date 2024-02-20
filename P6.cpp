#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class detail
{

        int ID;
        string name;
      //char name[10];
      char q[15];
      //string q;
      float exp;
      static float av_ex;
      static int total;
      long int contact;
  public:

        static void cal_avex()
        {

             cout<<"Average experience of all employees is "<<(av_ex/total)<<" ."<<endl;
        }


      checkid()
      {
         // a=ID;
          return ID;
      }
      getdata()
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
      displaydata()
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

};
float detail :: av_ex;///declare static variable
int detail :: total;

int main()
{
    int n;
    cout<<"Enter no. of employee:"<<endl;
    cin>>n;
    detail emp[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter detail of employee "<<i+1<<":"<<endl;
        emp[i].getdata();
    }

    int id;
    char c;int v;int a;

    do
    {
        cout<<"Enter an employee id:";
        cin>>id;
       for(v=0;v<n;v++)
       {

           a=emp[v].checkid();
           if(a==id)
           {
               emp[v].displaydata();break;
           }
       }
       if(v==n)
       {
           cout<<"ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl;
       }
       cout<<"Press Y to get another employee detail, Press N to exit:";
       cin>>c;
    }while(c=='y'||c=='Y');
    cout<<endl;
    //emp[n-1].cal_avex();
    detail::cal_avex();

}

