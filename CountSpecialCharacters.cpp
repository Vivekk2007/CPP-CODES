#include<iostream>
#include<string>
using namespace std;

int main(){

    string Sent;
    cout<<"Enter A Sentence: ";
    getline(cin,Sent);

    int count = 0;

    int len = Sent.length();

    for(int i=0; i<len; i++){
        if(!((Sent[i]>='A'&& Sent[i]<='Z'||Sent[i]>='a'&& Sent[i]<='z'||Sent[i]>='0'&& Sent[i]<='9'||Sent[i]==' '))){
            count++;
        }
    }
    cout<<count;
    return 0;
}