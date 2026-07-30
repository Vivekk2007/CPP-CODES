#include<iostream>
using namespace std;

int main(){

    float radius;
    cout<<"Enter the radius: ";
    cin>>radius;

    float area = 3.14159*radius*radius;
    
    float perimeter = 2*3.14159*radius;

    if(radius < 0){
        cout<<"A radius cannot be negative"<<endl;
        cout<<"REASON : Radius is a distance. Distance is alaways a Positive or Zero.";
    }
    
    else if(radius >=0){
        cout<<"Area of Circle:"<<area<<endl;
        cout<<"Perimeter of Circle:"<<perimeter;
    }
    
    return 0;

}