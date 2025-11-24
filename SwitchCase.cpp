// A program demonstrating the use of switch-case statements in C++
#include <iostream>
using namespace std;

int main() {
    int opt;

    cout<<"Hi.This is your BBIT Sem 1 Timetable (September - December 2025)"<< endl;
    cout<<"\n1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday"<< endl;
    cout<<"\nEnter the day number (1-5) to view the timetable: ";
    cin>> opt;

    switch (opt) {
        case 1:
            cout<<"Monday Classes\n.............."<<endl;
            cout<<"\t1. BBIT 1106: Math for Biz"<< endl;
            cout<<"\t2. BBIT 1107: Intro to Programming"<< endl;
            break;

        case 2:
            cout<<"Tuesday Classes\n.............."<< endl;
            cout<<"\t1. BBIT 1108: Intro for Programming"<< endl;
            cout<<"\t2. BBIT 1109: Ethics"<< endl;
            break;

        case 3:
            cout<<"Wednesday Classes\n.............."<< endl;
            cout<<"\t1. BBIT 1110: Math for Biz"<< endl;
            cout<<"\t2. BBIT 1111: Theology"<< endl;
            cout<<"\t3. BBIT 1111: Fundamentals of IT"<< endl;
            break;

        case 4:
            cout<<"Thursday Classes\n.............."<< endl;    
            cout<<"\t1. BBIT 1112: Accounting"<< endl;
            cout<<"\t2. BBIT 1113: Fundamentals of IT"<< endl;
            break;

        case 5:
            cout<<"Friday Classes\n.............."<< endl;    
            cout<<"\t1. BBIT 1114: Business Computing"<< endl;
            break;

        default:
            cout<<"Invalid Input.";
    }
    return 0;
}