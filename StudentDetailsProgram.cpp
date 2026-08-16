#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;
    int roll_number;
    string grade;

    void setname(string s)
    {
        if(s.size() == 0)
        {
            cout << "Invalid Name" << endl;
            return;
        }

        name = s;
    }

    void setage(int a)
    {
        if(a < 0 || a > 100)
        {
            cout << "Invalid Age" << endl;
            return;
        }

        age = a;
    }

    void setroll_number(int r)
    {
        roll_number = r;
    }

    void setgrade(string s)
    {
        grade = s;
    }

    void getname()
    {
        cout << name << endl;
    }

    void getage()
    {
        cout << age << endl;
    }

    int getroll_number()
    {
        return roll_number;
    }
};

int main()
{
    Student s1;

    string name;
    int age;
    int rollnumber;
    string grade;

    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter roll number: ";
        cin >> rollnumber;

        cout << "Enter grade: ";
        cin >> grade;

        s1.setname(name);
        s1.setage(age);
        s1.setroll_number(rollnumber);
        s1.setgrade(grade);

        cout << "\nStudent Details:\n";

        s1.getname();
        s1.getage();
        cout << s1.getroll_number() << endl;

        cout << "Do you want to enter again? (y/n): ";
        cin >> choice;
    }

    return 0;
}