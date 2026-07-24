#include<iostream>
#include<string>
using namespace std;

int main(){

    string Sent;
    cout<<"Enter A Sentence: ";
    getline(cin,Sent);

    string NewSent = Sent;

    int len = Sent.length();

    for(int i=0; i<len; i++){
        if(Sent[i]>='A' && Sent[i]<='Z'){
            NewSent[i]=Sent[i]+32;
        }
        else if(Sent[i]>='a' && Sent[i]<='z'){
            NewSent[i]=Sent[i]-32;
        }
    }
    cout<<NewSent;
    return 0;
}