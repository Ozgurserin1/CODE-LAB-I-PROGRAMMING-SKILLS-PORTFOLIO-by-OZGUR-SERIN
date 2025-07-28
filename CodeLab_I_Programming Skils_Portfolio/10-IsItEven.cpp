// Filename: 10-IsItEven.cpp
// Description: Determines if a number is even or odd
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output and string libraries
#include <string> // use the standard namespace
using namespace std; // function to determine even/odd

string isEven(int number) { // check if number is even
    if (number % 2 == 0) // return even message
        return "The provided number is even"; // return odd message
    else // main function
        return "The provided number is odd"; // variable to hold user number
} // prompt for input

int main() { // get number from user
    int num; // call function and store result
    cout << "Enter a number: "; // output the result
    cin >> num; // return 0 to indicate successful completion

    string result = isEven(num);
    cout << result << endl;

    return 0;
}
