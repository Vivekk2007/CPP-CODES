#include<iostream>
#include<string>
using namespace std;

class student{
    public:

     string name;
     int rollnumber;

     student(string Name, int Rollnumber){
        name=Name;
        rollnumber=Rollnumber;
     }

   //User Defined Copy Constructor
     student(const student &s){
        name=s.name;
        rollnumber=s.rollnumber;
     }

     void display(){
        cout<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Roll Number "<<rollnumber<<endl;
        cout<<"Data copied successfully";
     }

};

int main(){

   string name;
   cout<<"Enter Name: ";
   cin>>name;

   int rollnumber;
   cout<<"Enter RollNumber: ";
   cin>>rollnumber;

   student s1(name,rollnumber);
   student s2(s1);

   s2.display();
   return 0;
}
