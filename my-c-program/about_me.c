// ============================================================
// ABOUT ME - C VERSION
// This program asks 6 questions and displays a summary.
// ============================================================

// Include the standard input/output library.
// This gives us access to printf (for output) and fgets (for input).
#include <stdio.h>

// Include the string library.
// This gives us access to string functions like strcspn.
#include <string.h>

// Define a constant for the maximum length of each answer.
// Using a constant makes it easy to change the size later.
#define MAX_LEN 200

// The main function - where the program starts running.
int main() {

// --------------------------------------------------------
// VARIABLE DECLARATIONS
// These are the "storage boxes" for the user's answers.
// In C, we use char arrays to store text (strings).
// --------------------------------------------------------

char name[MAX_LEN]; // Stores the user's name
char course[MAX_LEN]; // Stores the course (BBIT or BCS)
char hobby[MAX_LEN]; // Stores the hobby
char reason[MAX_LEN]; // Stores why they chose the course
char expectation[MAX_LEN]; // Stores what they expect to learn
char definition[MAX_LEN]; // Stores their definition of programming
char food[MAX_LEN]; // Stores their favorite food
// --------------------------------------------------------
// WELCOME MESSAGE
// printf displays text on the screen.
// \n means "new line" (like pressing Enter).
// --------------------------------------------------------

printf("========================================\n");
printf(" WELCOME TO YOUR FIRST C PROGRAM!\n");
printf("========================================\n\n");

// --------------------------------------------------------
// QUESTION 1: NAME
// --------------------------------------------------------

// Display the question to the user.
printf("1. What is your name? ");

// fgets reads a full line of text from the keyboard.
// It stores it in the 'name' array.
// MAX_LEN tells fgets the maximum number of characters to read.
// stdin means "standard input" (the keyboard).
fgets(name, MAX_LEN, stdin);

// fgets includes the newline character ('\n') at the end.
// We remove it by finding its position and replacing it with '\0'.
// strcspn returns the index of the first '\n' in the string.
name[strcspn(name, "\n")] = '\0';

// --------------------------------------------------------
// QUESTION 2: COURSE
// --------------------------------------------------------

printf("2. What course are you doing? (BBIT/BCS): ");
fgets(course, MAX_LEN, stdin);
course[strcspn(course, "\n")] = '\0';

// --------------------------------------------------------
// QUESTION 3: HOBBY
// --------------------------------------------------------

printf("3. What is your hobby? ");
fgets(hobby, MAX_LEN, stdin);
hobby[strcspn(hobby, "\n")] = '\0';

// --------------------------------------------------------
// QUESTION 4: REASON FOR CHOOSING COURSE
// --------------------------------------------------------

printf("4. Why did you choose this course? ");
fgets(reason, MAX_LEN, stdin);
reason[strcspn(reason, "\n")] = '\0';

// --------------------------------------------------------
// QUESTION 5: EXPECTATIONS
// --------------------------------------------------------

printf("5. What do you expect to learn in programming? ");
fgets(expectation, MAX_LEN, stdin);
expectation[strcspn(expectation, "\n")] = '\0';

// --------------------------------------------------------

// QUESTION 6: DEFINITION OF PROGRAMMING
// --------------------------------------------------------

printf("6. In your own words, what is programming? ");
fgets(definition, MAX_LEN, stdin);
definition[strcspn(definition, "\n")] = '\0';

printf("7. What is your favorite food? ");
fgets(food, MAX_LEN, stdin);
food[strcspn(food, "\n")] = '\0';
// --------------------------------------------------------
// DISPLAY SUMMARY
// The %s format specifier is replaced by a string variable.
// --------------------------------------------------------

printf("\n========================================\n");
printf(" YOUR PROFILE SUMMARY\n");
printf("========================================\n\n");

printf("Name: %s\n", name);
printf("Course: %s\n", course);
printf("Hobby: %s\n", hobby);
printf("Reason: %s\n", reason);
printf("Expectation: %s\n", expectation);
printf("Programming is: %s\n", definition);
printf("Favorite Food: %s\n", food); 
printf("\n========================================\n");
printf(" Thank you for completing this!\n");
printf("========================================\n");

printf("Great job, %s!\n", name);

// Return 0 to the operating system, meaning the program ended successfully.
return 0;
}