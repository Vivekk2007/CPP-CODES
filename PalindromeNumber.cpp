#include <iostream>
using namespace std;

int main(){
    int num =0;
    cout<<"Enter a number: ";
    cin>>num;
    int original = num;
    int rev =0;

    while(num>0){
    rev = rev*10 + (num%10);
    num = num/10;
    }
    cout<<"Revese Number: "<<rev<< endl;

    if(original == rev){
        cout<<"Number is Palindrome";
    }
    else{
        cout<<"Number is NOT Palindrome";
    }
    return 0;


}