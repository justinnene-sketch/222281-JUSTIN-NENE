// A program showing the use of nested if-else statements in C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string interest;
    cout << "Please enter the child's age: ";
    cin >> age;

    if (age >=4 && age <=10)
{
    cout << "Enter the child's interest: ";
    cin >> interest;
    if (interest == "Soccer")
    {
        cout << "Admitted to school." << endl;
        cout << "Assigned to Soccer playgroup." << endl;
        return 0;
    }
    if (interest == "Art")
    {
        cout << "Admitted to school." << endl;
        cout << "Assigned to Art playgroup." << endl;
        return 0;
    }
    else
    {
        cout << "Admitted to school." << endl;
        cout << "Assigned to other playgroup." << endl;
        return 0;
    }
}
else
{
    cout << "Declined: Not admitted to school." << endl;
}
    return 0;
}