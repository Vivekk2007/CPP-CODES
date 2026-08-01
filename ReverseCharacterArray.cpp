#include<iostream>
using namespace std;

void arrayinput(char arr[], int size){
    for (int i=0; i<size; i++){
        cout<<"Enter The Element ["<<i+1<<"]:";
        cin>>arr[i];
    }
}

void OriginalArray(char arr[], int size){
    cout<<"Orginal Character Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void arrayrev(char arr[], int size){
    cout<<"Reverse Character Array: ";
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int size;
    cout<<"Enter the size of array:";
    cin>>size;

    char *arr = new char[size];
    arrayinput(arr,size);
    OriginalArray(arr,size);
    cout<<endl;
    arrayrev(arr,size);

    delete[] arr;
    return 0;
}