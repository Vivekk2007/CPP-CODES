#include<iostream>
using namespace std;

void arrayTable(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        arr[i]= num*(i+1);
    }

    for(int i=0; i<size; i++){
        cout<<num<<"*"<<i+1<<"="<<arr[i]<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter A Number:";
    cin>>num;

    int arr[10];

    arrayTable(arr, 10, num);
    return 0;

}
