#include<iostream>
#include<string>
using namespace std;

class student{

    public:
       string name;
       string studentclass;
       int rollnumber;
       int age;

       void setdetails(string Name,string classroom,int Rollnumber,int Age){

        if(Name.size()==0){
            cout<<"Invalid Name"<<endl;
            return;
        }

        else if(Age<5 || Age>18){
            cout<<"Check if the entered age is correct or not";
            return;
        }

        name=Name;
        studentclass=classroom;
        rollnumber=Rollnumber;
        age=Age;
       }

       void getdetails(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Class: "<<studentclass<<endl;
        cout<<"Roll Number"<<rollnumber<<endl;
        cout<<"Age:"<<age<<endl;
       }
};

int main(){

    student s[100];

    string name;
    string studentclass;
    int rollnumber;
    int age;

    int num;
    cout<<"Number of student details ";
    cin>>num;

    for(int i=1; i<=num; i++){

        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"Enter Student Class: ";
        cin>>studentclass;
        cout<<"Enter student Roll Number: ";
        cin>>rollnumber;
        cout<<"Enter student Age: ";
        cin>>age;

        s[i].setdetails(name,studentclass,rollnumber,age);
        cout<<endl;
        s[i].getdetails();
        cout<<endl;
    }

}