// ACTIVITY 1: SIMULATING ENCAPSULATION IN C
// Learning Outcome: Apply encapsulation using structs and functions
// ============================================================

#include <stdio.h> // For printf and scanf
#include <string.h> // For strcpy

// Define a structure named 'Student'
// In C, structs hold data, but cannot contain functions (methods) inside them.
struct Student {
char name[50];
int age; // We want to protect this from invalid changes!
};

// SETTER FUNCTION: Safely modifies the age inside the struct.
// We pass a POINTER to the struct so we can modify the original data.


void setAge(struct Student *s, int newAge) {
// VALIDATION: Check if the new age is realistic
if (newAge > 0 && newAge < 120) {
// The '->' arrow operator is used to access struct members via a pointer
s->age = newAge;
} else {
printf("Error: Invalid age! Age must be between 1 and 119.\n");
s->age = 0; // Set to default if invalid
}
}

// GETTER FUNCTION: Safely reads the age.
int getAge(struct Student *s) {
return s->age;
}

int main() {
// 1. Create a Student struct on the stack
struct Student s1;

// Initialize the data
strcpy(s1.name, "Alice");
// We use our function to set the age safely
setAge(&s1, 20);

// Print the data using our getter function


printf("Student Name: %s\n", s1.name);
printf("Student Age: %d\n", getAge(&s1));

// Try to set an invalid age
printf("\nAttempting to change age to -5...\n");
setAge(&s1, -5);
printf("Age after invalid attempt: %d\n", getAge(&s1));

// NOTE: In C, data is public by default. A rogue programmer could bypass
// our functions and do this: s1.age = -50;
// In C, encapsulation relies on the programmer following the rules!

return 0;
}
