#include <iostream>
using namespace std;

int main(){

    float Celcius;
    float Cel;
    float Fahrenheit;
    float Fah;
    float Kelvin;
    float Kel;

    int input =0;
    cout<<"If You Want to Change Tempterature Calcius to Fahrenheit,Type 1"<<endl;
    cout<<"If You Want to Change Tempterature Fahrenheit to Calcius,Type 2"<<endl;
    cout<<"If You Want to Change Tempterature Celsius to Kelvin, Type 3"<<endl;
    cout<<"If You Want to Change Tempterature Kelvin to Celcius,Type 4"<<endl;
    cout<<"If You Want to Change Tempterature Fahrenheit to Kelvin,Type 5"<<endl;
    cout<<"If You Want to Change Tempterature Kelvin to Fahrenheit, Type 6"<<endl;

    cin>>input;

    if (input == 1){
        cout<<"Enter the temperature: ";
        cin>>Celcius;
        Fah = (Celcius*9/5)+32;
        cout<<"Temperature in Fahrenheit : "<<Fah;
    }

    else if (input == 2){
        cout<<"Enter the temperature: ";
        cin>>Fahrenheit;
        Cel = (Fahrenheit-32)*5/9;
        cout<<"Temperature in Celcius : "<<Cel;
    }

    else if (input == 3){
        cout<<"Enter the temperature: ";
        cin>>Celcius;
        Kel = Celcius + 273.15;
        cout<<"Temperature in Kelvin: "<<Kel;
    }

    else if(input == 4){
        cout<<"Enter the temperature: ";
        cin>>Kelvin;
        Cel = Kelvin - 273.15;
        cout<<"Temperature in Celcius: "<<Cel;
    }

    else if (input == 5){
        cout<<"Enter the temperature: ";
        cin>>Fahrenheit;
        Kel = (Fahrenheit - 32)*5/9+273.15;
        cout<<"Temperature in Kelvin: "<<Kel;
    }

    else if (input == 6){
        cout<<"Enter the temperature: ";
        cin>>Kelvin;
        Fah = (Kelvin - 273.15)*9/5+32;
        cout<<"Temperature in Fahrenheit: "<<Fah;
    }
    return 0;
}
