#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number up to which you want to print number: ";
    cin>>num;

    for (int i=1; i<=num; i++){
        cout<<i<<" ";
        if (i%10==0){
            cout<<endl;
        }
    }


    return 0;

}
