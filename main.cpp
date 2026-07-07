//FOR LOOP//
// Using FOR LOOP to print table//


#include<iostream>
using namespace std;
int main(){
    int table;
    cout<< "Enter the Number whose Table you want ";
    cin>>table;
    for(int i=1; i<=10; i=i+1){
        cout<<table<<"x"<<i<<"="<<table*i<<endl;
    }
    return 0;
}