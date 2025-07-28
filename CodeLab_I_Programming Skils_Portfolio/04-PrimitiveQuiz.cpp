// Filename: 04-PrimitiveQuiz.cpp
// Description: Asks the capital of France, case-insensitive
// Author: Ozgur Serin
// Date: July 2025
// Notes: Created for CodeLab1 Programming Skills Portfolio

#include <iostream> // include input-output and string libraries
#include <string> // include algorithm for transform function
#include <algorithm> // use the standard namespace
using namespace std; // function to convert a string to lowercase

string toLower(string str) { // use transform to make all characters lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower); // return the lowercase string
    return str; // main function
} // declare a string to store user answer

int main() { // prompt the question
    string answer; // read the answer input
    cout << "What is the capital of France? "; // compare lowercase version to correct answer
    getline(cin, answer); // output correct message

    if (toLower(answer) == "paris") { // output wrong message
        cout << "Correct!" << endl; // return 0 to indicate successful completion
    } else {
        cout << "Wrong!" << endl;
    }

    return 0;
}
