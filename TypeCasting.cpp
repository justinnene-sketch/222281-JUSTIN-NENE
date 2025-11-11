#include <iostream>
using namespace std;

int main()
{
    // Implicit type casting
    double myNum = 15.5; // initialize a double variable
    int myNewNum; // create a new integer variable
    myNewNum = myNum; // assign double variable to integer variable (implicit cast)
    cout << myNewNum << endl; // output the integer variable

    // Explicit type casting
    double myNum2 = 20.678;
    int myNewNum2 = int(myNum2); // explicit type casting using C-style cast
    cout << "myNewNum2=" << myNewNum2 << endl;

    return 0;
}