#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter The Number: ";
    cin>>num;
     
    if(num>0){
        cout<<"Number is Positive";
    }
    else if(num==0){
        cout<<"Number is Zero";
    }
    else{
        cout<<"Number is Negative";
    }
    return 0;
}