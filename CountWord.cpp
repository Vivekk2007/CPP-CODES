#include <iostream>
#include <iostream>
using namespace std;

int main(){

    string Sent;
    cout<<"Enter a Sentence:";
    getline(cin,Sent);

    int count=0;

    int len = Sent.length();

    for(int i=0; i<len; i++){
        if(Sent[i]==' '){
            count++;
        }
    }
    cout<<"Number of Word: "<<count+1;
    return 0;
}