// Filename: 07-SomeCounting.cpp
// Description: Demonstrates various for-loop counting examples
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output library
using namespace std; // use the standard namespace

int main() { // main function
    for (int i = 0; i <= 50; i++) // count 0 to 50
        cout << i << " "; // new line
    cout << endl; // count 50 to 0

    for (int i = 50; i >= 0; i--) // new line
        cout << i << " "; // count 30 to 50
    cout << endl; // new line

    for (int i = 30; i <= 50; i++) // count 50 to 10, step -2
        cout << i << " "; // new line
    cout << endl; // count 100 to 200, step 5

    for (int i = 50; i >= 10; i -= 2) // new line
        cout << i << " "; // return 0 to indicate successful completion
    cout << endl;

    for (int i = 100; i <= 200; i += 5)
        cout << i << " ";
    cout << endl;

    return 0;
}
