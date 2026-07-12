#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    int flag =0;

    if(num<=1){
        cout<<"Not Prime Number";
    }
    else{
        for(int i=2; i<num; i++){
            if (num%i==0){
            flag = 1;
            break;
        }
        }    
    
    if (flag ==1){
        cout<<"Not Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
}
    return 0;
}