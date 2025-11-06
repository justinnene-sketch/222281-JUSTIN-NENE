//Escape sequence operators. Special characters that
//control the formatting of output on CLI program.
#include <iostream>
using namespace std;

int main ()
{
    cout << "Strathmore University is the leading\n university in the region";
    cout << "\t Testing the tab operator."<<endl;
    cout << "\\ Testing the backlash operator"<<endl;
    cout << "\"Testing the single quote operator\"" <<endl;
    cout << "Testing the double quote operator" <<endl;
    cout << "\a Testing the alert operator" <<endl;

    return 0;
}