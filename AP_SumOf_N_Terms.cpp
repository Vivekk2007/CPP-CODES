#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a First Term: ";
    cin>>a;

    int d;
    cout<<"Enter the Common Difference: ";
    cin>>d;

    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    int sum = (n*(2*a + (n-1)*d))/2;
    cout<<"Sum of the first "<<n<<" terms is "<<sum;

    return 0;
}