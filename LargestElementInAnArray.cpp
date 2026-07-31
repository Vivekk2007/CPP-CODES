#include<iostream>
using namespace std;

void arrays(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<"Enter the element ["<<i+1<<"]: ";
        cin>>arr[i];
    }
}

void comparevalues(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
     cout<<"Largest element is: "<<max<<endl;        
}


int main(){
    int size;
    cout<<"Enter the Size of Array: ";
    cin>>size;

    int *arr = new int[size];
    arrays(arr,size);

    comparevalues(arr,size);

    delete[] arr;
    return 0;
}
