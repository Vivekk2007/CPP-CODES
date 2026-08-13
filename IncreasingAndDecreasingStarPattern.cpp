#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter the size of Pattern ";
    cin>>N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
    cout<<endl;
    }

    for(int k=1; k<=N; k++){
        for(int l=1; l<=N-k+1; l++){
            cout<<"*"<<" ";
        }
    cout<<endl;
    }

}