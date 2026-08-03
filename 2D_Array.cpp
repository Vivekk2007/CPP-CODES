#include <iostream>
using namespace std;

void arrayinput(int arr[][10], int row, int col){
    for(int i=0; i<row; i++){
        for(int J=0; J<col; J++){
            cout<<"Enter the elements ["<<i+1<<"]["<<J+1<<"]: ";
            cin>>arr[i][J];
    }
    }
}
void arrayprint(int arr[][10], int row, int col){
    for(int i=0; i<row; i++){
        for(int J=0; J<col; J++){
        cout<<arr[i][J]<<" ";
    }
    cout<<endl;
    }
}
int main(){
    int rows;
    int cols;

    cout<<"Enter number of rows:";
    cin>>rows;
    cout<<"Enter number of columns:";
    cin>>cols;

    int arr[10][10];
    arrayinput(arr,rows,cols);
    cout<<endl;
    arrayprint(arr,rows,cols);

    delete[] arr;
    return 0;
}

