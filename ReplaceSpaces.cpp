#include <iostream>
#include <string>

using namespace std;

void replaceSpace(string & str){
    for (int i=0; i<str.length(); i++){
        if (str[i]==' '){
            str[i]='_';
        }
    }
}

int main(){
    string str;
    cout<<"Enter a sentance: "<<str;
    getline(cin,str);

    replaceSpace(str);

    cout<<"After replacing spaces: "<<str;
    
    return 0;
}