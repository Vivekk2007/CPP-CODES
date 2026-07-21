#include <iostream>
#include <string>
using namespace std;

int main(){

    string Sent;
    cout<<"Enter the sentence: ";
    getline(cin,Sent);

    int len = Sent.length();

    char letter;
    cout<<"Enter the letter: ";
    cin>>letter;
    

    int count=0;

    for(int i=0; i<len; i++){
        if(Sent[i]==letter){
            count++;
        }
    }
    cout<<"The Letter "<<"'"<<letter<<"'"<<" appears "<<count<<" times";

    return 0;
}