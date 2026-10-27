
#include <iostream>  // Allows input and output
using namespace std;

int main() {

    int number; // Stores the user's number

    // Ask for the first input before the loop
    cout << "Enter a positive number: ";
    cin >> number;

    // Repeat while the number is zero or negative
    while (number <= 0) {

        // Tell the user the input is invalid
        cout << "Invalid! Please enter a positive number: ";

        // Ask for another number
        cin >> number;
    }

    // This runs after the user enters a positive number
    cout << "You entered: " << number << endl;

    return 0; // End the program successfully
}
