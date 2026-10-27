// Learning Outcome: Evaluate recursive solutions
// ============================================================

// Include the standard input/output library
#include <stdio.h>

// ------------------------------------------------------------
// FUNCTION 1: factorialRecursive (Simple Recursion)
// Purpose: Calculate factorial using simple recursion
// Formula: n! = n * (n-1)!
// Base case: 0! = 1
// ------------------------------------------------------------
int factorialRecursive(int n) {
// Base case: if n is 0 or 1, return 1
if (n <= 1) {
return 1;
}

// Recursive case: n * factorial of (n-1)
// This creates a chain of multiplications after recursion returns
return n * factorialRecursive(n - 1);
}

// ------------------------------------------------------------
// FUNCTION 2: factorialTail (Tail Recursion)
// Purpose: Calculate factorial using tail recursion
// Tail recursion: the recursive call is the LAST operation
// C does not have default arguments, so we need two functions:
// one for the user to call, and one for the recursive work.
// ------------------------------------------------------------
int factorialTailHelper(int n, int accumulator) {
// Base case: if n is 0 or 1, return the accumulator
if (n <= 1) {
return accumulator;
}

// Tail recursive case: pass the accumulated product
// The recursive call is the last thing the function does
return factorialTailHelper(n - 1, n * accumulator);
}

// Wrapper function for the user to call
int factorialTail(int n) {
return factorialTailHelper(n, 1);


}

// The main function
int main() {
int num;

// Ask the user for a number
printf("Enter a number to calculate factorial: ");
// scanf requires the address-of operator (&) for integers
scanf("%d", &num);

// Validate input
if (num < 0) {
printf("Factorial is not defined for negative numbers.\n");
return 1;
}

// Calculate using simple recursion
printf("\nUsing simple recursion:\n");
printf(" %d! = %d\n", num, factorialRecursive(num));

// Calculate using tail recursion
printf("\nUsing tail recursion:\n");
printf(" %d! = %d\n", num, factorialTail(num));

// Comparison

printf("\n--- Comparison ---\n");
printf("Simple recursion: Clear, matches mathematical definition.\n");
printf("Tail recursion: More efficient for large n (compiler optimization).\n");

return 0;
}