#include<iostream>
#include<iomanip>
using namespace std;
print()
    {
       cout<<endl;
        cout<<setw(17);
        cout<<left<<"Model";
        cout<<setw(17);
        cout<<left<<"Fuel";
        cout<<setw(17);
        cout<<left<<"price";
        cout<<setw(17);
        cout<<left<<"Mileage";
        cout<<setw(17);
        cout<<left<<"Transmission";
        cout<<setw(17);
        cout<<left<<"Tank Capacity";
        cout<<setw(17);
        cout<<left<<"Seating";
        cout<<setw(17);
        cout<<left<<"Airbags"<<endl;//cout<<endl;
        cout<<setw(23)<<"\t\t\t\t  (Lakhs)";
        cout<<setw(34);
        cout<<left<<"(Km/L)";
        //cout<<left<<"\t   (Km/L)";
        cout<<setw(17);
        cout<<left<<"(Liters)";
        cout<<setw(10);
        cout<<left<<"Capacity";
    }
class cars
{
    private:
        string model_name;
        string fuel_type;
        float price;
        float milage;
        string trans;
        float tank_cap;
        int seatno;
        bool airbag;
        int g;
         public:
             displaymm()
             {
                 cout<<model_name;
             }
        findrange(int range)
        {
            if(price<=range)
                getdetails();
        }
        checkg(int mm)
        {
            if(mm==g)
                getdetails();
        }

    getdata()
    {
        cout<<"Enter model name"<<endl;
        cin>>model_name;fflush(stdin);
        cout<<"Enter fuel type"<<endl;
        cout<<"(1)Petrol (2)Diesel (3)CNG (4)Electric"<<endl;

        cin>>g;
       // cin>>fuel_type;fflush(stdin);
        cout<<"Enter price"<<endl;
        cin>>price;fflush(stdin);
        cout<<"Enter mileage"<<endl;
        cin>>milage;fflush(stdin);
        cout<<"Enter Transmission type,it can be manual or AMT"<<endl;
        cin>>trans;fflush(stdin);
        cout<<"Enter tank capacity"<<endl;
        cin>>tank_cap;fflush(stdin);
        cout<<"Enter seat no."<<endl;
        cin>>seatno;fflush(stdin);
        cout<<"Airbag exist or not,enter 0 or 1"<<endl;
        cin>>airbag;fflush(stdin);
    }
    getdetails()
    {
        cout<<endl;
        cout<<setw(17);
        cout<<left<<model_name;fflush(stdout);
        if(g==1)
       {
           cout<<setw(17);
        cout<<left<<"Petrol";//fflush(stdout);
       }
       else if(g==2)
       {
           cout<<setw(17);
        cout<<left<<"Diesel";//fflush(stdout);
       }
       else if(g==3)
       {
           cout<<setw(17);
        cout<<left<<"CNG";//fflush(stdout);
       }
       else
       {
           cout<<setw(17);
        cout<<left<<"Electric";//fflush(stdout);
       }
        cout<<setw(17);
        cout<<left<<price;fflush(stdout);
        cout<<setw(17);
        cout<<left<<milage;fflush(stdout);
        cout<<setw(17);
        cout<<left<<trans;fflush(stdout);
        cout<<setw(17);
        cout<<left<<tank_cap;fflush(stdout);
        cout<<setw(17);
        cout<<left<<seatno;fflush(stdout);
        cout<<setw(17);
        if(airbag)
        cout<<left<<"YES"<<endl;
        else
        cout<<left<<"NO"<<endl;fflush(stdout);

    }
};
int main()
{
    int n;
    cout<<"Enter no. of car"<<endl;
    cin>>n;
    cars detail[n];
    for(int i=0;i<n;i++)
    {
        detail[i].getdata();
    }

    int z;
    cout<<"WELCOME TO TATA MOTORS"<<endl<<"GET THE CAR DETAILS AS PER YOUR PREFERENCE\n"<<endl;
    cout<<"(1)Model Name(2)Fuel Type(3)Price Range\n"<<endl;
    int option ;
    cout<<"Enter your option"<<endl;
    cin>>option;
    cout<<endl<<"________________________"<<endl<<endl;
    switch(option)
    {
    case 1:
        cout<<"LIST OF TATA CARS\n"<<endl;
        for(int j=0;j<n;j++)
        {
            //detail[j].displaymm();
           setw(10);
            cout<<left<<"("<<j+1<<")";
            detail[j].displaymm();
        }
        cout<<endl;
        cout<<"CHOOSE YOUR CAR TO GET DETAIL:"<<endl;
        cin>>z;
        print();
        detail[z-1].getdetails();
        break;
    case 2:
        cout<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS\n"<<endl;
        cout<<"(1)Petrol (2)Diesel (3)CNG (4)Electric\n"<<endl;
        cout<<"ENTER YOUR FUEL PREFERENCE\n"<<endl;
        cin>>z;print();
        for(int ty=0;ty<n;ty++)
        {
            detail[ty].checkg(z);
            //if(detail[ty].g==z)
               // detail[ty-1].getdetails();
        }
        break;
    case 3:
    cout<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS:"<<endl;
    int range;
    cin>>range;print();
    for(int u=0;u<n;u++)
    {
       detail[u].findrange(range);
    }
    break;
    }
}

