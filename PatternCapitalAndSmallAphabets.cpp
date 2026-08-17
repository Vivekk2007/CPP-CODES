#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number of rows ";
    cin>>num;

    char CH = 'A';
    char ch = 'a';

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<CH<<" ";
            CH++;
        }
    cout<<endl;
    }
    for(int k=1; k<=num; k++){
        for(int l=1; l<=num-k+1; l++){
            cout<<ch<<" ";
            ch++;
        }
    cout<<endl;
    }

    return 0;
}