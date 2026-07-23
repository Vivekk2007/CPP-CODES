#include<iostream>
#include<string>
using namespace std;

int main(){

    string sent;
    cout<<"Enter a sentance: ";
    getline(cin,sent);

    string revsent;

    int size = sent.length();

    for (int i = size-1; i>=0; i--){
        revsent = revsent+sent[i];
    }
    cout<<"Reverse Sentance: "<<revsent;
    return 0;
}