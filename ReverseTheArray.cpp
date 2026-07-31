#include <iostream>
using namespace std;

void arrays(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter the element ["<<i+1<<"]: ";
        cin>>arr[i];
    }
}

void originalArray(int arr[], int size){
    cout<<"Original Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void revs(int arr[], int size){
    cout<<"Reverse Array:";
    for (int i = size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int size;
    cout<<"Enter the Size of Array: ";
    cin>>size;

    int *arr = new int[size];
    arrays(arr,size);
    originalArray(arr,size);
    cout<<endl;
    revs(arr,size);

    delete[] arr;
    return 0;
}
