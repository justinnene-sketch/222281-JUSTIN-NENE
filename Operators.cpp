#include <iostream>
using namespace std;

int main() 
{
    // Variable declarations
    int num1 = 16, num2 = 4;
    
    // Arithmetic Operators
    cout << "ADDITION: " << num1 << " + " << num2 << " = " << num1 + num2 << endl; // ADDITION: 16 + 4 = 20
    cout << "SUBTRACTION: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "MULTIPLICATION: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "DIVISION: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "MODULUS: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    cout << "INCREMENT: ++ " << num1 << " = " << ++num1 << endl; // Pre-increment
    cout << "INCREMENT : " << num2 << " ++ = " << num2++ << endl; // Post-increment
    cout << "DECREMENT: -- " << num1 << " = " << --num1 << endl; // Pre-decrement
    cout << "DECREMENT : " << num2 << " -- = " << num2-- << endl; // Post-decrement
    cout << "COMBINED INCREMENT AND ASSIGNMENT: num1 += num2 -> " << (num1 += num2) << endl;
    cout << "COMBINED DECREMENT AND ASSIGNMENT: num1 -= num2 -> " << (num1 -= num2) << endl;
    cout << "COMBINED MULTIPLICATION AND ASSIGNMENT: num1 *= num2 -> " << (num1 *= num2) << endl;
    cout << "COMBINED DIVISION AND ASSIGNMENT: num1 /= num2 -> " << (num1 /= num2) << endl;
    
    // Comparison/Logical Operators
    cout << "3>2" << " = " << (3 > 2) << endl;
    cout << "3<2" << " = " << (3 < 2) << endl;
    cout << "4>=3" << " = " << (4 >= 3) << endl;
    cout << "4<=3" << " = " << (4 <= 3) << endl;
    cout << "3==3" << " = " << (3 == 3) << endl;
    cout << "!(4>=3)" << " = " << !(4 >= 3) << endl;

    // Boolean operators (and &&, or ||)
    cout << "trues && true = " << ((3 > 2) && (4 >= 2)) << endl;
    cout << "true && false = " << ((3 > 2) && (4 <= 2)) << endl;
    cout << "false && false = " << ((3 < 2) && (4 >= 2)) << endl;

    // Boolean or
    cout << "true || true = " << ((3 > 2) || (4 >= 2)) << endl;
    cout << "true || false = " << ((3 > 2) || (4 <= 2)) << endl;
    cout << "false || false = " << ((3 < 2) || (4 >= 2)) << endl;
 
    // Pointer Operators

    // Terminary Operators
