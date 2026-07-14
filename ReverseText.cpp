#include <iostream>
using namespace std;

int main(){

    string word;
    cout<<"Enter your word you want to Reverse ";
    cin>> word;
    int size = word.length();
    string revword;
    
    for (int i = size; i>=0; i--){
        revword = revword+ word[i];

    }
    cout<<"Reversed Word: "<<revword;

    return 0;
}