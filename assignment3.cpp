#include <iostream> 
#include <cmath> // for pow() and sqrt()
using namespace std;

//a basic calculator
int main() 
{
    double num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << '\n';
    cout << "Subtraction: " << num1 - num2 << '\n';    
    cout << "Multiplication: " << num1 * num2 << '\n';
    cout << "Division: " << num1 / num2 << '\n';
    cout << num1 << " raised to the power of " << num2 << " is " << pow(num1, num2) << '\n';
    cout << "Square root of " << num1 << " is: " << sqrt(num1) << '\n';
    cout << "Square root of " << num2 << " is: " << sqrt(num2) << '\n';
    
    return 0;
}