#include<iostream>
#include<string>
using namespace std;


void squarepattern(int r, int c, string s){
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}

void increasingtrianglepattern(int r,int c,string s){
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}

void DecreasingRightTriangle(int r, int c,string s){
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=r-i+1; j++)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}

void IncreasingDecreasingTrianglePattern(int r,int c, string s){
    for(int i=1; i<=r; i++){
        for(int j=1; j<=i; j++){
            cout<<s<<" ";
        }
    cout<<endl;
    }

    for(int k=1; k<=r; k++){
        for(int l=1; l<=r-k+1; l++){
            cout<<s<<" ";
        }
    cout<<endl;
    }
}

int main(){

    int choose;

    cout<<"========MENU========"<<endl;
    cout<<"1.Square Pattern"<<endl;
    cout<<"2.Increasing Triangle Pattern."<<endl;
    cout<<"3.Decreasing Right Triangle"<<endl;
    cout<<"4.Increasing-Decreasing Triangle Pattern"<<endl;

    cout<<"Enter Your Choose: ";
    cin>>choose;

    int row;
    cout<<"Enter Noumber of Rows: ";
    cin>>row;
    int col;
    cout<<"Enter Number Of Columns: ";
    cin>>col;
    string element;
    cout<<"Enter Number Of Symbol: ";
    cin>>element;

    switch(choose){
        case 1:
        squarepattern(row,col,element);
        break;

        case 2:
        increasingtrianglepattern(row,col,element);
        break;

        case 3:
        DecreasingRightTriangle(row,col,element);
        break;

        case 4:
        IncreasingDecreasingTrianglePattern(row,col,element);
        break;


        default:
           cout<<"Invalid Choice";

    }

}

