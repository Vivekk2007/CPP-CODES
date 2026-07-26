#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a First Term: ";
    cin>>a;

    int d;
    cout<<"Enter the Common Difference: ";
    cin>>d;

    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;


    int nTH = a+(n-1)*d;
    cout<<"The "<<n<<"th"<<" Term is "<<nTH;
    return 0;
}