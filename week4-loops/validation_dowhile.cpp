
#include <iostream>  // Allows input and output
using namespace std;

int main() {

    int number = 0; // Initialise number to 0

    // Execute this block at least once
    do {

        // Ask the user to enter a positive number
        cout << "Enter a positive number: ";
        cin >> number;

        // Display an error if the number is invalid
        if (number <= 0) {
            cout << "Invalid! ";
        }

    // Repeat if the number is zero or negative
    } while (number <= 0);

    // Display the accepted number
    cout << "You entered: " << number << endl;

    return 0; // End the program successfully
}
