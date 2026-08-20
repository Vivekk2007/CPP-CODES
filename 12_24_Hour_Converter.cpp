#include<iostream>
#include<string>
using namespace std;

int main(){

    int hours;
    cout<<"Enter Hours ";
    cin>>hours;

    int minute;
    cout<<"Enter Minute ";
    cin>>minute;

    string AmOrPm;
    cout<<"Am or Pm ";
    cin>>AmOrPm;

    if(AmOrPm == "AM" || AmOrPm == "Am" || AmOrPm == "am"){
        if(hours == 12){
            hours = 0;
        }
        cout << "24-hour time: " << hours << ":" << minute;
    }

    else if(AmOrPm == "PM" || AmOrPm == "Pm" || AmOrPm == "pm"){
        if(hours != 12){
            hours = hours + 12;
        }
        cout << "24-hour time: " << hours << ":" << minute;
    }
    
    else
    {
        cout << "Invalid AM/PM";
    }

    return 0;

            
}