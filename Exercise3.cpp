#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
    string interest;
    int option = 0;

    cout <<"Enter child's age: ";
    cin >> age;

    if (age >=4 && age <=10) {
        cout << "Pick the right data from the user: ";
        cin >> interest;

        //Convert interest into an integer option
        if(interest == "soccer") option = 1;
        else if(interest == "art") option = 2;
        else if(interest == "music") option = 3;
        else if(interest == "athletics") option = 4;
        else if(interest == "toys") option = 5;
        else option = 0;  // for all other interests
        
        switch(option) {
            case 1:
                cout << "Assign to the Soccer Play Group." << endl;
                break;
            case 2:
                cout << "Assign to the Art Play Group." << endl;
                break;
            case 3:
                cout << "Assign to the Music Play Group." << endl;
                break;
            case 4:
                cout << "Assign to the Athletics Play Group." << endl;
                break;
            case 5:
                cout << "Assign to the Toys Play Group." << endl;
                break;
            default:
                cout << "Assign to Other Groups." << endl;
        }
    } else {
        cout << "Error:Age must be between 4 and 10 years." << endl;
    }
    return 0;
}