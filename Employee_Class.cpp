#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
       string name;
       int Id=0;
       int Day=0;
       int month=0;
       int year=0;
       string time;

       void setname(string Name){
        if(Name.size()==0){
            cout<<"Invalid Name"<<endl;
            return;
        }
        name=Name;
       }

       void setid(int id){
        if(id <= 0){
            cout << "Invalid ID"<<endl;;
            return;
        }
        Id = id;
       }

      void setday(int day){
        if(day<=0||day>31){
            cout<<"Invalid Day"<<endl;
            return;
        }
        Day=day;
      }

      void setmonth(int Month){
        if(Month<=0||Month>12){
            cout<<"Invalid Month"<<endl;
            return;
        }
        month=Month;
      }

      void setyear(int Year){
        year=Year;
      }

      void settime(string Time){
        time=Time;
        cout<<endl;
      }

      void getname(){
        cout<<name;
      }

      void getid(){
        cout<<Id;
      }

      void getdate(){
        cout<<Day<<"/";
        cout<<month<<"/";
        cout<<year;
      }

      void gettime(){
        cout<<time;
      }
};

int main(){

    Employee E;

    string name;
    int Id;
    int Day;
    int month;
    int year;
    string time;



    int NumOfEmp;
    cout<<"Enter The Number of Employee: ";
    cin>>NumOfEmp;

    for(int i=0; i<NumOfEmp; i++){

        cout<<endl;

        cout<<"Enter Employee Name["<<i+1<<"]:";
        cin>>name;

        cout<<"Enter EmpId:";
        cin>>Id;

        cout<<"Enter Day ";
        cin>>Day;

        cout<<"Enter Month ";
        cin>>month;

        cout<<"Enter Year ";
        cin>>year;

        cout<<"Enter Time ";
        cin>>time;

        E.setname(name);
        E.setid(Id);
        E.setday(Day);
        E.setmonth(month);
        E.setyear(year);
        E.settime(time);


        cout<<"\nEmployee Name: ";
        E.getname();
        cout<<endl;
        
        cout<<"Employee ID: ";
        E.getid();
        cout<<endl;

        cout<<"Date of Entry: ";
        E.getdate();
        cout<<endl;

        cout<<"Time:";
        E.gettime();
        cout<<endl;
    }
    return 0;
}