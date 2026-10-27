// Include the standard input/output library for printf
#include <stdio.h>

// The main function
int main() {

// Display a header so we know what this program does
printf("Number filter: Skip multiples of 3, stop at 15\n");


// Start a for loop from 1 to 20
// Part 1: int i = 1; -> Start counting from 1
// Part 2: i <= 20; -> Loop while i is 20 or less
// Part 3: i++ -> Increment i by 1 each iteration
for (int i = 1; i <= 20; i++) {

// CHECK 1: If i is exactly 15, stop the loop immediately
// 'break' exits the loop completely, skipping all remaining iterations
if (i == 15) {
// Display a message to show we are breaking
printf("Breaking at %d!\n", i);

// Exit the loop immediately - no more iterations will run
break;
}

// CHECK 2: If i is divisible by 3, skip it
// The % operator gives the remainder
// If i % 3 == 0, then i is a multiple of 3 (3, 6, 9, ...)
if (i % 3 == 0) {
// 'continue' skips the rest of this iteration
// and jumps back to the increment (i++)
continue;
}



// DISPLAY: This line only runs if we did NOT break and did NOT continue
// So it prints numbers that are NOT multiples of 3, until we hit 15
printf("%d ", i);

} // End of for loop

// Move to a new line after the loop ends
printf("\n");

// Return 0 to signal successful completion
return 0;
}