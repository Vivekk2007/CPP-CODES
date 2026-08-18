#include <iostream>
#include <string>
using namespace std;

class Students
{
public:
    string name;
    int rollnumber;
    int marks;

    void setname(string Name)
    {
        if(Name.size() == 0)
        {
            cout << "Invalid Name";
            return;
        }

        name = Name;
    }

    void setrollnumber(int RN)
    {
        if(RN < 0)
        {
            cout << "Check Again";
            return;
        }

        rollnumber = RN;
    }

    void setmarks(int Mark)
    {
        if(Mark < 0 || Mark > 100)
        {
            cout << "Invalid Marks";
            return;
        }

        marks = Mark;
    }

    void getname()
    {
        cout << name;
    }

    void getrollnumber()
    {
        cout << rollnumber;
    }

    void getmarks()
    {
        cout << marks;
    }

    void getgrade()
    {
        if(marks >= 90)
            cout << "Grade : A+";
        else if(marks >= 80)
            cout << "Grade : A";
        else if(marks >= 70)
            cout << "Grade : B";
        else if(marks >= 60)
            cout << "Grade : C";
        else
            cout << "Grade : Below C";
    }
};

int main()
{
    Students s1;

    string name;
    int rollnumber;
    int marks;

    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter Your Name: ";
        cin >> name;

        cout << "Enter Your Roll Number: ";
        cin >> rollnumber;

        cout << "Enter The Marks: ";
        cin >> marks;

        s1.setname(name);
        s1.setrollnumber(rollnumber);
        s1.setmarks(marks);

        cout << "\n---------Student Details-----------\n";

        cout<<"Student Name:";
        s1.getname();
        cout << endl;
        
        cout<<"Student RollNumber:";
        s1.getrollnumber();
        cout << endl; 
        
        cout<<"Student Mark:";
        s1.getmarks();
        cout << endl; 
        
        cout<<"Student grade:";
        s1.getgrade();
        cout << endl;

        cout << "Do You Want To Enter Again? (y/n): ";
        cin >> choice;
    }

    return 0;
}