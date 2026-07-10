#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number (Cannot be zero): ";
    cin>>num2;

    //Addition
    int add = num1+num2;
    cout<<"Adiition of two numbers is: " << add << endl;

    //Subtraction
    int sub = num1-num2;
    cout<<"Subtraction of two numbers is: " << sub << endl;

    //Multiplication
    int multi = num1*num2;
    cout<<"Multiplication of two numbers is: "<< multi << endl;

    //Divison
    int div = num1/num2;
    cout<<"Divison of two numbers is: "<< div << endl;

    return 0;
}