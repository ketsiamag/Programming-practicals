// ACTIVITY 4: GEOMETRY FUNCTION LIBRARY (C VERSION)
// Learning Outcome: Create and use a library of functions
// ============================================================

// Include the standard input/output library
#include <stdio.h>

// ------------------------------------------------------------
// CONSTANT: PI
// In C, we use #define for constants (no 'const' needed, though
// 'const double PI = 3.14159;' is also valid in modern C)
// ------------------------------------------------------------
#define PI 3.14159

// ------------------------------------------------------------
// FUNCTION: areaOfCircle
// Purpose: Calculate the area of a circle
// Formula: A = π × r2
// Parameters: radius (double)

// Returns: area (double)
// ------------------------------------------------------------
double areaOfCircle(double radius) {
// Check for invalid input
if (radius < 0) {
printf("Error: Radius cannot be negative.\n");
return 0.0;
}

// Calculate and return the area
return PI * radius * radius;
}

// ------------------------------------------------------------
// FUNCTION: areaOfRectangle
// Purpose: Calculate the area of a rectangle
// Formula: A = length × width
// Parameters: length and width (double)
// Returns: area (double)
// ------------------------------------------------------------
double areaOfRectangle(double length, double width) {
// Check for invalid input
if (length < 0 || width < 0) {
printf("Error: Length and width cannot be negative.\n");
return 0.0;
}
// Calculate and return the area
return length * width;
}

// ------------------------------------------------------------
// FUNCTION: areaOfTriangle
// Purpose: Calculate the area of a triangle
// Formula: A = 1⁄2 × base × height
// Parameters: base and height (double)
// Returns: area (double)
// ------------------------------------------------------------
double areaOfTriangle(double base, double height) {
// Check for invalid input
if (base < 0 || height < 0) {
printf("Error: Base and height cannot be negative.\n");
return 0.0;
}

// Calculate and return the area
return 0.5 * base * height;
}

// ------------------------------------------------------------
// FUNCTION: displayMenu
// Purpose: Display the menu options

// ------------------------------------------------------------
void displayMenu() {
printf("\n===== GEOMETRY CALCULATOR =====\n");
printf("1. Area of Circle\n");
printf("2. Area of Rectangle\n");
printf("3. Area of Triangle\n");
printf("4. Exit\n");
printf("Enter your choice: ");
}

// The main function
int main() {
int choice;
double radius, length, width, base, height, area;

// Loop until the user chooses to exit
do {
// Display the menu
displayMenu();
// Read the user's choice
scanf("%d", &choice);

// Process the user's choice
switch (choice) {
case 1:
printf("Enter radius: ");

// %lf is used for double in scanf
scanf("%lf", &radius);
area = areaOfCircle(radius);
// %.2f formats a double to 2 decimal places in printf
printf("Area of circle: %.2f\n", area);
break;

case 2:
printf("Enter length: ");
scanf("%lf", &length);
printf("Enter width: ");
scanf("%lf", &width);
area = areaOfRectangle(length, width);
printf("Area of rectangle: %.2f\n", area);
break;

case 3:
printf("Enter base: ");
scanf("%lf", &base);
printf("Enter height: ");
scanf("%lf", &height);
area = areaOfTriangle(base, height);
printf("Area of triangle: %.2f\n", area);
break;

case 4:


printf("Goodbye!\n");
break;

default:
printf("Invalid choice. Please try again.\n");
}
} while (choice != 4);

return 0;
}