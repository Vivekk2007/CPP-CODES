#include <iostream>
using namespace std;

void arrayinput(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter The Element (0 or 1): ";
        cin>>arr[i];
    }
}

void arrayprint(int arr[], int size){
    cout<<"Original Array { ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}";
}


void arrayflip(int arr[], int size){
    cout<<"Flip Array { "; 
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    cout<<arr[i]<<" ";
    }
    cout<<"}";
}

int main(){
    int size;
    cout<<"Enter The Size of Array: ";
    cin>>size;

    int *arr = new int[size];

    arrayinput(arr, size);
    arrayprint(arr, size);
    cout<<endl;
    arrayflip(arr, size);
    delete[] arr;
    return 0;
}