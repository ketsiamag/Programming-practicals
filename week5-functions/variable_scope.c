// ACTIVITY 2: VARIABLE SCOPE - GLOBAL VS. LOCAL (C VERSION)
// Learning Outcome: Analyse variable scope
// ============================================================

// Include the standard input/output library
#include <stdio.h>

// ------------------------------------------------------------
// GLOBAL VARIABLE
// Declared outside all functions - accessible everywhere
// ------------------------------------------------------------
int globalCounter = 100;

// ------------------------------------------------------------
// FUNCTION: displayGlobal
// Purpose: Shows the value of the global variable
// ------------------------------------------------------------
void displayGlobal() {

// This function can access globalCounter because it is global
printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);

// Uncomment the line below to see an error:
// printf("%d", localCounter); // ERROR: localCounter not declared here
}

// ------------------------------------------------------------
// FUNCTION: modifyGlobal
// Purpose: Modifies the global variable
// ------------------------------------------------------------
void modifyGlobal() {
// Change the value of the global variable
globalCounter = 500;
printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

// ------------------------------------------------------------
// FUNCTION: localDemo
// Purpose: Demonstrates a local variable with the same name
// ------------------------------------------------------------
void localDemo() {
// Declare a LOCAL variable with the same name as the global
int globalCounter = 999; // This SHADOWS the global variable

// This refers to the local variable, not the global one
printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

// The main function
int main() {
// Declare a local variable in main
int localCounter = 50;

// Access the global variable
printf("In main: globalCounter = %d\n", globalCounter);
printf("In main: localCounter = %d\n", localCounter);

// Call the functions
displayGlobal();
modifyGlobal();
localDemo();

// Check the global variable after modification
printf("Back in main: globalCounter = %d\n", globalCounter);

// Uncomment to see an error:
// printf("%d", globalCounterLocal); // ERROR: not declared

return 0;
}