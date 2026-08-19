#include<iostream>
#include<string>
using namespace std;

int main(){

    int row;
    cout<<"Enter The Number Of Rows:";
    cin>>row;

    int col;
    cout<<"Enter The Number of Column:";
    cin>>col;

    string ch;
    cout<<"Enter Any Special Character, Alphabet or Value: ";
    cin>>ch;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }
    cout<<endl;
    }

}