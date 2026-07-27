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

    int power=1;

    for(int i=1; i<=n-1; i++){
        power=power*r;
    }

    int nthTerm = a*power;

    cout<<"The "<<n<<"th"<<" Term is "<<nthTerm;

    return 0;
}