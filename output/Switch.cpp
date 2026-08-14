#include<iostream>
using namespace std;

void greet(){
    cout<<"Hello!";
}

void OddAndEven(){

    int num;
    cout<<"Enter A Number: ";
    cin>>num;

    if(num%2==0){
        cout<<"Given Number Is Even";
    }
    else{
        cout<<"Given is Odd";
    }

}

void AgeVerification(){
    
    int age;
    cout<<"Enter Your Age:";
    cin>>age;
    
    if(age>18){
        cout<<"Your Are Eligible To Vote";
    }
    else{
        cout<<"NO! You Are Not Eligible To Vote";
    }
}
int main(){

    int choice;

    cout<<"========== MENU =========="<<endl;
    cout<<"1.Greet"<<endl;
    cout<<"2.Odd And Even"<<endl;
    cout<<"3. Age Verification"<<endl;

    cout<<"Enter Your Choice: ";
    cin>>choice;

    cout<<endl;

    switch (choice)
    {
    case 1:
        greet();
        break;

    case 2:
        OddAndEven();
        break;

    case 3:
        AgeVerification();
        break;
        
    default:
    cout<<"Invalid Choice "<<endl;
        break;
    }

}