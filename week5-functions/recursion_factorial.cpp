
// ACTIVITY 3: RECURSION - TWO FACTORIAL SOLUTIONS
// Learning Outcome: Evaluate recursive solutions
#include <iostream>
using namespace std;
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

// FUNCTION 2: factorialTail (Tail Recursion)
// Purpose: Calculate factorial using tail recursion
// Tail recursion: the recursive call is the LAST operation
int factorialTail(int n, int accumulator = 1) {
// Base case: if n is 0 or 1, return the accumulator
if (n <= 1) {
return accumulator;
}

// Tail recursive case: pass the accumulated product
// The recursive call is the last thing the function does
return factorialTail(n - 1, n * accumulator);
}

// The main function


int main() {
int num;

// Ask the user for a number
cout << "Enter a number to calculate factorial: ";
cin >> num;

// Validate input
if (num < 0) {
cout << "Factorial is not defined for negative numbers." << endl;
return 1;
}

// Calculate using simple recursion
cout << "\nUsing simple recursion:" << endl;
cout << " " << num << "! = " << factorialRecursive(num) << endl;

// Calculate using tail recursion
cout << "\nUsing tail recursion:" << endl;
cout << " " << num << "! = " << factorialTail(num) << endl;

// Comparison
cout << "\n--- Comparison ---" << endl;
cout << "Simple recursion: Clear, matches mathematical definition." << endl;
cout << "Tail recursion: More efficient for large n (compiler optimization)." << endl;


return 0;
}