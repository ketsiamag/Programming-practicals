// Include the standard input/output library
#include <stdio.h>

// The main function
int main() {

// Declare an integer variable to store the user's input
int number;

// Display a prompt asking for a positive number
printf("Enter a positive number: ");

// Read the first input from the user BEFORE the loop
// This is necessary because the while loop checks the condition first
// scanf requires the address-of operator (&) for integers
scanf("%d", &number);

// While loop: checks condition BEFORE executing the body
// If the user entered a valid number (positive), the loop never runs
// If the user entered an invalid number, the loop repeats
while (number <= 0) {

// Display an error message
printf("Invalid! Please enter a positive number: ");

// Read a new input from the user
scanf("%d", &number);

} // End of while loop - condition is re-checked

// This line runs only when a valid number is entered
printf("You entered: %d\n", number);

// Return 0 to signal successful completion
return 0;
}