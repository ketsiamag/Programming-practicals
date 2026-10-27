//===============
// sum of first n natural numbers
// learning outcome: Apply a for loop to iterate over a range
//===============

#include <iostream>

using namespace std;

int main() {

    int n;
    int sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;
// Start a for loop with three parts separated by semicolons:
// Part 1: int i = 1; -> Initialisation: start counting from 1
// Part 2: i <= n; -> Condition: keep looping while i is less than or equal to n
// Part 3: i++ -> Increment: increase i by 1 after each iteration
    for (int i = 1; i <= n; i++) {
        // Add the current value of i to the running total
// This is equivalent to: sum = sum + i
        sum += i;
    }
// Display the final result to the user
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}