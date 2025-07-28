// Filename: 06-BruteForceAttack.cpp
// Description: Simulates password attempts with limit
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output library
using namespace std; // use the standard namespace

int main() { // main function
    const int password = 12345; // define correct password
    int attempt; // variable for user input
    int attemptsLeft = 5; // max attempts allowed

    while (attemptsLeft > 0) { // loop while attempts remain
        cout << "Enter password: "; // prompt for password
        cin >> attempt; // correct password entered

        if (attempt == password) { // exit loop with welcome message
            cout << "Welcome to the Secure Area!" << endl; // reduce attempts left
            break; // check if no attempts left
        } else { // alert the user
            attemptsLeft--; // show remaining attempts
            if (attemptsLeft == 0) { // return 0 to indicate successful completion
                cout << "Too many failed attempts. Authorities have been alerted!" << endl;
            } else {
                cout << "Incorrect password. Attempts remaining: " << attemptsLeft << endl;
            }
        }
    }

    return 0;
}
