#include <iostream>
using namespace std;

int main(){

    string word;
    cout<<"Enter a String: ";
    cin>>word;
    int vowel;
    int consonant;
    int len = word.length();

    for(int i=0; i<len; i++){
        if( word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
            vowel++;
        }
        else if((word[i]>='a'&&word[i]<='z')||
                (word[i]>='A'&&word[i]<='Z')){
            consonant++;
        }   
    }

    cout<<"No of vowels: " << vowel<<endl;
    cout<<"Number of consonant: "<<consonant;

    return 0;
}