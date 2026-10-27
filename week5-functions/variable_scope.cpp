// ACTIVITY 2: VARIABLE SCOPE - GLOBAL VS. LOCAL
// Learning Outcome: Analyse variable scope
#include <iostream>
using namespace std;

// GLOBAL VARIABLE
// Declared outside all functions - accessible everywhere
int globalCounter = 100;

// FUNCTION: displayGlobal
// Purpose: Shows the value of the global variable
void displayGlobal() {
// This function can access globalCounter because it is global
cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;

// Uncomment the line below to see an error:
// cout << localCounter; // ERROR: localCounter is not declared here
}

// ------------------------------------------------------------
// FUNCTION: modifyGlobal
// Purpose: Modifies the global variable
// ------------------------------------------------------------
void modifyGlobal() {
// Change the value of the global variable
globalCounter = 500;
cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}
// FUNCTION: localDemo
// Purpose: Demonstrates a local variable with the same name
void localDemo() {
// Declare a LOCAL variable with the same name as the global
int globalCounter = 999; // This SHADOWS the global variable

// This refers to the local variable, not the global one
cout << "Inside localDemo: globalCounter = " << globalCounter << endl;
}

// The main function
int main() {
// Declare a local variable in main
int localCounter = 50;

// Access the global variable
cout << "In main: globalCounter = " << globalCounter << endl;
cout << "In main: localCounter = " << localCounter << endl;

// Call the functions
displayGlobal();

modifyGlobal();
localDemo();

// Check the global variable after modification
cout << "Back in main: globalCounter = " << globalCounter << endl;

// Uncomment to see an error:
// cout << globalCounterLocal; // ERROR: not declared

return 0;
}