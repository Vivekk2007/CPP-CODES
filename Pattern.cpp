#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of star ";
    cin>>n;

    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            cout<<"*"<<" ";
            col++;

        }
    cout<<endl;
    row++;

    }
    cout<<"Your "<<n<<" x "<<n<<" Star Pattern is Printed";
}