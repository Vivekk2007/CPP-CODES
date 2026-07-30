#include <iostream>
using namespace std;

void chararray(char arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<"Enter the Letter ["<<i+1<<"]:";
        cin>>arr[i];
    }

    cout<<"Word: ";

    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){

    int size;
    cout<<"Enter the size of string: ";
    cin>>size;

    char *arr = new char[size];
    chararray(arr, size);

    delete[] arr;
    return 0;
}
