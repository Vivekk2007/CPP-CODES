#include <iostream>
using namespace std;

int main(){

    int NoOfUser;
    cout<<"Enter the number of users: ";
    cin>>NoOfUser;

    string Name[100];
    int Age[100];
    string City[100];
    string MobileNumber[100];

    for(int i=0; i<NoOfUser; i++){
        
        cout<<"Enter Details of User"<<i+1<<endl;

        cout<<"Enter Name: ";
        cin>>Name[i];
        cout<<"Enter Age:  ";
        cin>>Age[i];
        cout<<"Enter City: ";
        cin>>City[i];
        cout<<"Enter Mobile Number: ";
        cin>>MobileNumber[i];

        cout<<endl;
    }

    cout<<"----- User Details -----"<<endl;

    for (int i=0; i<NoOfUser; i++){

        cout<<"User"<<i+1<<endl;
        cout<<"Name: "<<Name[i]<<endl;
        cout<<"Age: "<<Age[i]<<endl;
        cout<<"City: "<<City[i]<<endl;
        cout<<"Mobile Number: "<<MobileNumber[i]<<endl;
       
        cout<<endl;
    }

    return 0;
}