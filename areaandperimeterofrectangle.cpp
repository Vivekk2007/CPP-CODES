#include <iostream>
using namespace std;

int main(){
    int height;
    int width;

    cout<<"Enter the height of rectangle: ";
    cin>>height;
    cout<<"Enter the width of rectangle: ";
    cin>>width;

    //Area of rectangle 
    int area = height * width;
    cout<<"Area of rectangle is: "<<area<<endl;

    //Perimeter of rectangle
    int perimeter = 2*(height + width);
    cout<<"Perimeter of rectangle is: "<<perimeter<<endl;


    return 0;
}