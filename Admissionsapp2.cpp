//A program showing the use of if-else if-else statements in C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;

    cout << "Enter the child's age: ";
    cin >> age;

    if (age >16) {
        cout <<" Declined: Age exceeds maximum limit for admission." << endl;
    }
    else if (age >=7) {
        cout <<"Admit to Grade School." << endl;
    }
    else if (age >=5 && age <=6) {
        cout <<"Admit to Kindergarten." << endl;
    }
    else if (age >=3 && age <=4) {
        cout <<"Admit to Pre-School." << endl;
    }
    else if (age >=1 && age <=2) {
        cout <<"Admit to Playgorup." << endl;
    }
    else if (age < 1 && age >=0) {
        cout <<"Reject." << endl;
    }
    else {
        cout <<"Invalid age entered." << endl;
    }
    return 0;

}