// Filename: 08-SimpleSearch.cpp
// Description: Searches for a name in an array
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output and string libraries
#include <string> // use the standard namespace
using namespace std; // main function

int main() { // initialize array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"}; // string to store name to search
    string searchName; // flag to track if found
    bool found = false; // prompt user for name

    cout << "Enter a name to search: "; // read input
    cin >> searchName; // loop through names

    for (string name : names) { // check for match
        if (name == searchName) { // break if found
            found = true; // output found message
            break; // output not found message
        } // return 0 to indicate successful completion
    }

    if (found)
        cout << searchName << " found!" << endl;
    else
        cout << searchName << " not found." << endl;

    return 0;
}
