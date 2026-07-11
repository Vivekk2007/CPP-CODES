#include <iostream>
using namespace std;

int main(){
    float feh;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>feh;

    cout<<"Temperature in Celsius: "<<(feh-32)*5.0/9<<" Celsius"<<endl;
    return 0;
}