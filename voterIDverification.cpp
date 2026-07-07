//IF ELSE STATMENT//

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<< "ENTER YOUR AGE: ";
    cin>>age;
    if(age>= 18){
        cout<<"YOU ARE ELIGIBLE TO VOTE";
    }
    else{
        cout<<"YOU ARE NOT ELIGIBLE TO VOTE "<<" Wait For "<< 18-age << "Years";
    }
    return 0;
}