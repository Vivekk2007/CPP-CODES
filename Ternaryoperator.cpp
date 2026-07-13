#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    (age>=18)? cout<<"You are eligible to drive" : cout<<"Your are NOT eligible to drive ";

    return 0;
}