//Simple program that outputs numbers:12,14,16,18,20,22,24,26,28 using while loop
#include <iostream>
#include <string>
using namespace std;
int main(){
    int number = 12;

    cout << "The even numbers from 12 to 28 are: " << "  ";

    while (number <= 28) {
        cout << number << " ";
        number += 2; // Increment by 2 to get the next even number
    }
    cout << endl;

//Simple program that computes the sum of whole numbers from 20 to 25  
    int start =20, end =25;
    int sum = 0;

    while (start <= end) {
        sum += start;
        start++;
    }
    cout << "Sum = " << sum << endl;
    
//Simple program counts the number of times a user enters wrong password until the correct one is entered
    string correctPassword = "secret1234";
    string enteredPassword;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredPassword == correctPassword) {
            cout << "Access granted." << endl;
            return 0;
        } else {
            cout << "Incorrect password. Try again." << endl;
            attempts++;
        }
    }
    cout << "Too many incorrect attempts. Access denied." << endl;
    
    return 0;
}