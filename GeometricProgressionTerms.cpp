#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a First Term: ";
    cin>>a;

    int r;
    cout<<"Enter the Common Ratio: ";
    cin>>r;

    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<"The Terms Are: ";
    
    for(int i = 1; i <= n; i++){
    int power = 1;

    for(int j = 1; j <= i - 1; j++){
        power = power * r;
    }

    int term = a * power;

    cout<<term<< " ";
    }

}