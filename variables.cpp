#include <iostream>
using namespace std;

class person
{
    char name[30];
    int age;

public:
    void getData();
    void display();
};

void person::getData()
{
    cout << "Enter Name: " << "\n";
    cin >> name;
    cout << "Enter Age : " << "\n";
    cin >> age;
}

void person::display()
{
    cout << "\nName: " << name;
    cout << "\nAge : " << age;
}

int main()
{
    // comments
    // cout << "Hello, Ritesh";

    // Variables
    // float num1, num2, sum, avg;
    // cout << "Enter the Numbers : ";
    // cin >> num1;
    // cin >> num2;

    // sum = num1 + num2;
    // avg = sum / 2;
    // cout << "Sum is : " << sum << " & Average is " << avg << endl;

    person p;
    p.getData();
    p.display();
    return 0;
}