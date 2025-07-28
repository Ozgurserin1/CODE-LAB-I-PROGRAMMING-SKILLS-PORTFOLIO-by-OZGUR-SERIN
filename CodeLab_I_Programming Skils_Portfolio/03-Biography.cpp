// Filename: 03-Biography.cpp
// Description: Prompts for name, hometown, and age, with validation
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output and string libraries
#include <string> // use the standard namespace
using namespace std; // main function

int main() { // declare string variables for name and hometown
    string name, hometown; // declare integer variable for age
    int age; // prompt for full name

    cout << "Enter your full name: "; // get full name input (including spaces)
    getline(cin, name); // prompt for hometown

    cout << "Enter your hometown: "; // get hometown input
    getline(cin, hometown); // prompt for age

    cout << "Enter your age: "; // validate age input is a number
    while (!(cin >> age)) { // clear error flags
        cout << "Please enter a valid number for age: "; // ignore incorrect input
        cin.clear(); // output all information on new lines
        cin.ignore(10000, '\n'); // return 0 to indicate successful completion
    }

    cout << "Name: " << name << "\nHometown: " << hometown << "\nAge: " << age << endl;
    return 0;
}
