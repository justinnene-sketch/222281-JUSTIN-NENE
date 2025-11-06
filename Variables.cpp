// Exploring different variable types in C++
#include <iostream>
using namespace std;

//Global variable
int globalVar = 100;  /*Variable declared outside of any 
function and accessible from any part of this source file*/

//Example function with parameter variable
void exampleFunction(int paramVar) /*Variable declared in the function 
Parametersare using for passing data when a function is called*/
{
    cout <<"Parameter variable: " << paramVar << endl;
}
    
int main() 
{
    //Local variable
    int localVar = 50; /*Variable declared within a function and 
    accessible only within that function*/

    //Static variable
    static int staticVar = 200; /*Variable that retains its value 
    between function calls*/

    //Constant variable
    const double PI = 3.14159; /*Variable whose value cannot be changed 
    after initialization*/

    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Static Variable: " << staticVar << endl;
    cout << "Constant Variable (PI): " << PI << endl;

    // Calling the example function with a parameter variable
    exampleFunction(25);

    return 0;
}