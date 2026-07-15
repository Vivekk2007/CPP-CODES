#include <iostream>
using namespace std;

int main(){

    string Name;
    int Age;
    string City;
    int MobileNumber;

    cout<<"Enter Name: ";
    cin>>Name;
    cout<<"Enter Age:  ";
    cin>>Age;
    cout<<"Enter City: ";
    cin>>City;
    cout<<"Enter Mobile Number: ";
    cin>>MobileNumber;

    cout<<endl;

    cout<<"------User Details-------"<<endl;
    
    cout<<"Name: "<<Name<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"City: "<<City<<endl;
    cout<<"Mobile Number: "<<MobileNumber<<endl;

    return 0;
}