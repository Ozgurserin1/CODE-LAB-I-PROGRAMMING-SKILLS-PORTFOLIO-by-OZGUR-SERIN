// Filename: 05-DaysOfTheMonth.cpp
// Description: Displays number of days in a month using switch
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output library
using namespace std; // use the standard namespace

int main() { // main function
    int month; // variable to store user input for month
    cout << "Enter a month number (1-12): "; // prompt for month number
    cin >> month; // switch-case to print number of days

    switch (month) { // months with 31 days
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: // months with 30 days
            cout << "31 days" << endl; // February has 28 or 29 days
            break; // invalid input case
        case 4: case 6: case 9: case 11: // return 0 to indicate successful completion
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 or 29 days" << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;
    }

    return 0;
}
