// Include the input/output library for cout and cin
#include <iostream>

// Use the standard namespace
using namespace std;

// ------------------------------------------------------------
// FUNCTION: swapByValue
// Purpose: Attempts to swap two integers
// Parameters: a and b (passed by value - copies are made)
// Returns: void (nothing)
// ------------------------------------------------------------
void swapByReference(int &a, int &b) {

// Display the values inside the function before swapping
cout << " Inside function - Before swap: a = " << a << ", b = " << b << endl;

// Declare a temporary variable to hold 'a'
int temp = a;
// Assign the value of 'b' to 'a'
a = b;
// Assign the value of 'temp' (original a) to 'b'
b = temp;

// Display the values inside the function after swapping
cout << " Inside function - After swap: a = " << a << ", b = " << b << endl;

// The function ends here. The original variables are NOT changed.
}

// The main function - where the program starts
int main() {
// Declare two integer variables in main
int x = 10;
int y = 20;

// Display the values before calling the function
cout << "Before calling swapByValue:" << endl;
cout << " x = " << x << ", y = " << y << endl;

// Call the function, passing x and y by value
// Copies of x and y are sent to the function
swapByReference(x, y);

// Display the values after calling the function
cout << "After calling swapByValue:" << endl;
cout << " x = " << x << ", y = " << y << endl;

// Explain why the values did not change
cout << "\nExplanation: The function received COPIES of x and y." << endl;
cout << "Changes made inside the function do not affect the originals." << endl;

// Return 0 to signal successful completion
return 0;
}