#include<iostream>
using namespace std;

void arraysum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        cout<<"Enter the element ["<<i+1<<"] ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Sum of elements = "<<sum<<endl;
}

int main(){
    int size;
    cout<<"Enter The Array Size: ";
    cin>>size;

    int arr[size];

    arraysum(arr,size);
    return 0;
}