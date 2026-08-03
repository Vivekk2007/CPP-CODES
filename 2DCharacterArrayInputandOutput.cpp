#include<iostream>
using namespace std;

void arrayinput(char arr[][10], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter Letter ["<<i+1<<"]["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
}

void arrayoutput(char arr[][10], int row, int col){
    cout<<"Letter 2D array"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
}

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    int col;
    cout << "Enter the number of columns: ";
    cin >> col;

    char arr[10][10];

    arrayinput(arr, row, col);
    arrayoutput(arr, row, col);

    return 0;
}
