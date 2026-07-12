#include <iostream>
using namespace std;

int main(){

    int num1;
    cout<<"Enter the First number: ";
    cin>>num1;

    int num2;
    cout<<"Enter the Second number: ";
    cin>>num2;

    int num3;
    cout<<"Enter the Third number: ";
    cin>>num3;

    if (num1>num2 && num1>num3){
        cout<<"Largest Number = "<<num1;
    }

    else if (num2>num3 && num2>num1){
        cout<<"Largest Number = "<<num2;
    }

    else{
        cout<<"Largest Number = "<<num3;

    }
    return 0;
}