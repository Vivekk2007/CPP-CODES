#include <iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter a String: ";
    cin>>str;
    int digits;
    int len = str.length();

    for (int i=0; i<len; i++){
        if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||
            str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='10'){
            digits++;
        }
        else if(str[i]==' '){
            continue;
        }

    }
    cout<<"Total number of digit in the string is: "<<digits;
    return 0;
}