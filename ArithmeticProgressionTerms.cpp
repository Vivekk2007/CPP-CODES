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


    int nTH;

    cout<<"The terms are: ";
    
    for(int i=1; i<=n; i++){
        nTH = a+(i-1)*d;
        cout<<nTH<<" ";
    }

    return 0;
}

