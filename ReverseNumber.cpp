#include <iostream>
using namespace std;

int main(){
    int num =0;
    cout<<"Enter a number: ";
    cin>>num;
    int rev =0;

    while(num>0){;
    rev = rev*10 + (num%10);
    num = num/10;
    }
    cout<<"Revese Number: "<<rev;
    return 0;
}