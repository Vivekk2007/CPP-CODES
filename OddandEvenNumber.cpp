#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;

    if (num%2==0){
        cout<<"Given number is Even";
    }
    else {
        cout<<"Given number is Odd";
    }
    return 0;
}