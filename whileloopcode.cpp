//WHILE LOOP//
//Using WHILE LOOP to print table//

#include<iostream>
using namespace std;
int main(){
    int table;
    cout<< "Enter The Number whose Table You Want To Print ";
    cin>>table;
    int i=1;
    while(i<=10){
        cout<<table<<"x"<<i<<"="<<table*i<<endl;
        i=i+1;
    }
    return 0;
}