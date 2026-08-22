#include<iostream>
#include<string>
using namespace std;

class Customer{

    public:

     string AccountHolderName;
     int balance;

     static int totalBalance;
     static int NoOfCustomer;

     void setdetails(string n, int b){
        AccountHolderName=n;
        balance=b;

        NoOfCustomer++;
        totalBalance+=balance;
     }

     void displaydetails(){
        cout<<"Account Holder Name: "<<AccountHolderName<<endl;
        cout<<"Enter Balance: "<<balance;
        cout<<endl;
     }
};

int Customer::totalBalance=0;
int Customer::NoOfCustomer=0;

int main(){

    Customer s[100];

    string AccountHolderName;
    int balance;

    int num;
    cout<<"Enter Number Of Customer: ";
    cin>>num;

    for(int i=1; i<=num; i++){

        cout<<endl;

        cout<<"Account Holder Name: ";
        cin>>AccountHolderName;
        cout<<"Balance: ";
        cin>>balance;

        s[i].setdetails(AccountHolderName,balance);
        cout<<endl;
    }

    for(int j=1; j<=num; j++){
        s[j].displaydetails();
        cout<<endl;
    }

    cout<<"Total Number Of Account: "<<Customer::NoOfCustomer<<endl;
    cout<<"Total Balance in Bank: "<<Customer::totalBalance<<endl;
}