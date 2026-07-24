#include <iostream>
#include <string>
using namespace std;

int main(){

    string Sent;
    cout<<"Enter a Sentence:";
    getline(cin,Sent);

    string UpperSent = Sent;
    int size = Sent.length();

    for(int i=0; i<size; i++){
        if(Sent[i]>='a' && Sent[i]<='z'){
            UpperSent[i]= Sent[i]-32;
        }
        else{
            UpperSent[i]=Sent[i];
        }
    }
    cout<<"Sentence: "<<UpperSent;
    return 0;
}



