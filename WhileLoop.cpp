//A simple program using while loop to the user which food they like untile they type "N"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string food;

    cout << "Enter the food you like (type 'N' to stop): " << endl;
    cin >> food;

    while (food != "N") {
        cout << "You like " << food << "." << endl;
        cout << "Enter another food you like (type 'N' to stop): " << endl;
        cin >> food;
    }

    cout << "Thank you for sharing your food preference!" << endl;

    return 0;
}