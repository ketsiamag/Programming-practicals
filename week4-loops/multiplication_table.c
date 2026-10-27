// Include the standard input/output library for printf
#include <stdio.h>

// The main function - where the program starts running
int main() {

// Display a title for the multiplication table
printf("========================================\n");
printf(" MULTIPLICATION TABLE (1 to 10)\n");
printf("========================================\n\n");

// OUTER LOOP: Controls the rows (multiplicand 1 to 10)
// Part 1: int i = 1; -> Start with row 1
// Part 2: i <= 10; -> Continue until row 10
// Part 3: i++ -> Move to the next row
for (int i = 1; i <= 10; i++) {

// INNER LOOP: Controls the columns (multiplier 1 to 10)
// This loop runs completely for EACH iteration of the outer loop
// Part 1: int j = 1; -> Start with column 1
// Part 2: j <= 10; -> Continue until column 10
// Part 3: j++ -> Move to the next column
for (int j = 1; j <= 10; j++) {

// Display the product with a field width of 5 characters
// In C, we use printf with %5d to set a minimum width of 5
// This replaces setw(5) from C++'s <iomanip>
printf("%5d", i * j);

} // End of inner loop - all columns for this row are printed

// After the inner loop finishes, move to the next line
// This starts a new row for the next value of i
printf("\n");

} // End of outer loop - all rows are printed

// Display a closing line
printf("========================================\n");

// Return 0 to signal successful completion
return 0;
}