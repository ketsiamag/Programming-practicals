// ACTIVITY 4: STUDENT SCORE ANALYZER (C VERSION)
// Learning Outcome: Create a program that reads scores, calculates
// average, and displays scores above average
// ============================================================

#include <stdio.h>

// ------------------------------------------------------------
// FUNCTION: calculateAverage
// Purpose: Calculate the average of an array of scores
// Parameters: scores (array), size (number of elements)



// Returns: average (double)
// ------------------------------------------------------------
double calculateAverage(int scores[], int size) {
int sum = 0;
// Loop through each score and add to sum
for (int i = 0; i < size; i++) {
sum += scores[i];
}
// Return the average as a double
return (double)sum / size;
}

// ------------------------------------------------------------
// FUNCTION: displayAboveAverage
// Purpose: Display scores that are above the average
// Parameters: scores (array), size (number of elements), average
// Returns: void
// ------------------------------------------------------------
void displayAboveAverage(int scores[], int size, double average) {
printf("\nScores above average (%.2f):\n", average);
int found = 0; // Flag to track if any score is above average
// Loop through each score and compare with average
for (int i = 0; i < size; i++) {
if (scores[i] > average) {
printf(" Score %d at position %d\n", scores[i], i + 1);
found = 1;

}
}
// If no scores are above average, display a message
if (!found) {
printf(" None\n");
}
}

// The main function
int main() {
const int SIZE = 10; // Number of scores
int scores[SIZE]; // Array to store scores

// Ask the user to enter 10 scores
printf("Enter %d student scores:\n", SIZE);
for (int i = 0; i < SIZE; i++) {
printf("Score %d: ", i + 1);
scanf("%d", &scores[i]);
}

// Calculate the average
double average = calculateAverage(scores, SIZE);

// Display the results
printf("\n--- Results ---\n");
printf("Average score: %.2f\n", average);



// Display scores above average
displayAboveAverage(scores, SIZE, average);

return 0;
}