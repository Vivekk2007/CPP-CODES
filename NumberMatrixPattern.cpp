#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int couts=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<couts<<" ";
            couts++;
        }
    cout<<endl;
    }
    return 0;
}