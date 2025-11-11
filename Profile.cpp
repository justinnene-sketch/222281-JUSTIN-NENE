//Profile
#include <iostream>
#include <string>
using namespace std;

int main()
{
string firstName, lastName, fullName, alsoKnownAs, favouriteMeal, favouriteMovie, whyAmIInThisClass;
cout<< "Enter your first name:\n";
getline(cin, firstName);

cout<< "Enter your last name:\n ";
getline(cin, lastName); 

cout<< "Enter your full name:\n ";
getline(cin, fullName);

cout<< "Enter your also known as (nickname):\n ";
getline(cin, alsoKnownAs);

cout<< "Enter your favourite meal:\n ";
getline(cin, favouriteMeal);

cout<< "Enter your favourite movie:\n ";
getline(cin, favouriteMovie);

cout<< "Enter why am I in this class:\n ";
getline(cin, whyAmIInThisClass); 

//display out with frame box
cout << "\n----- Justin Njuguna Profile Summary -----\n";
cout << "|First Name: " << firstName << endl;
cout << "|Last Name: " << fullName << endl;
cout << "|Full Name: " << lastName << endl;
cout << "||Favourite Meal: " << favouriteMeal << endl;
cout << "|Favourite Movie: " << favouriteMovie << endl;
cout << "|Why Am I In This Class: " << whyAmIInThisClass << endl;
cout << "------------------------------------------\n";
return 0;
}