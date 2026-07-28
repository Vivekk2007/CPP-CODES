#include <iostream>
using namespace std;

int main(){

    int arr[10];
    
    for(int i=0; i<=9; i++){
        cout<<"Enter The Value For Array["<<i+1<<"]:";
        cin>>arr[i];
        cout<<endl;
    }

    cout<<"Array { ";

    for(int i=0; i<=9; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"}";
    
    return 0;
}