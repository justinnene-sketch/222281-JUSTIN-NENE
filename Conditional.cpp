// Aprogram showing the use of conditional statements(if and if-else) in C++
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please Enter your age: ";
    cin >> age;

    if (age>=4){
        cout<< "Admitted! Proceed to Registration"<< endl;
    }
    else {
        cout<< "Declined! Minimum age not reached"<< endl;
    }
    return 0;
}