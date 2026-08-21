#include<iostream>
#include<string>
using namespace std;

class student{
    public:
      string name;
      int rollnumber;
      student(string n, int r){
        name=n;
        rollnumber=r;
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
