#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number whose factorial you want to find: ";
    cin>>num;
    int fact=1;

    for (int i=1; i<=num; i++){
        fact = fact*i;
    }

    cout<<fact;

    

    return 0;
}