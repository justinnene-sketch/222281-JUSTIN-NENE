// A program to demonstrate the use of the ternary operator in C++
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int age;
    cout << " Enter the age of the child: ";
    cin >> age;
    // Using ternary operator to check admission eligibility
    string message = (age >= 4) ? "Admitted to school." : "Declined: Not admitted to school.";
    cout << message << endl;

    return 0;
}
