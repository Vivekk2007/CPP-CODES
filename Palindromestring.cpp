#include <iostream>
using namespace std;

int main(){

    string word;
    cout<<"Enter your word: ";
    cin>> word;
    int size = word.length();
    string revword;
    
    for (int i = size-1; i>=0; i--){
        revword = revword+ word[i];

    }
    if (word== revword){
        cout<<"The word is Palindrome";
    }
    else{
        cout<<"The word is not a Palidrome";
    }

    return 0;
}
