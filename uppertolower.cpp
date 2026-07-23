#include <iostream>
#include <string>
using namespace std;

int main(){

    string sent;
    cout<<"Enter a Sentance:";
    getline(cin,sent);

    string lowersent = sent;
    int size = sent.length();

    for(int i=0; i<size; i++){
        if(sent[i]>='A' && sent[i]<='Z'){
            lowersent[i]= sent[i]+32;
        }
        else{
            lowersent[i]=sent[i];
        }
    }
    cout<<lowersent;
    return 0;
}


