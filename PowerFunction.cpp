#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the base number: ";
    cin>>num;

    int pow;
    cout<<"Enter the exponent: ";
    cin>>pow;

    int ans=1;

    for(int i=1; i<=pow; i++){
        ans = ans*num;
    }
    cout<<"Result: "<<ans;
    return 0;
}