// ACTIVITY 3: SIMULATING ABSTRACT CLASSES
// Learning Outcome: Evaluate pure virtual function

#include <stdio.h>

// Base Struct
struct Shape {
// THE ABSTRACT METHOD (like virtual double area() = 0;)
// We declare the function pointer but do NOT assign it a function!
double (*calculateArea)(void* derivedShape);
};

// Derived Struct 1
struct Square {
struct Shape base;
double side;
};

// Derived Struct 2
struct Circle {
struct Shape base;
double radius;
};

// --- Specific Implementations ---
// Notice they take void* so they can accept ANY shape, then cast it.

double squareArea(void* shapePtr) {
struct Square* s = (struct Square*)shapePtr;

return s->side * s->side;
}

double circleArea(void* shapePtr) {
struct Circle* c = (struct Circle*)shapePtr;
return 3.14159 * c->radius * c->radius;
}

int main() {
// 1. Create a Square and ASSIGN its area function
struct Square sq;
sq.side = 5.0;
sq.base.calculateArea = squareArea; // Filling the abstract slot!

// 2. Create a Circle and ASSIGN its area function
struct Circle circ;
circ.radius = 3.0;
circ.base.calculateArea = circleArea; // Filling the abstract slot!

// 3. Call the functions
// We pass the address of the derived struct (&sq, &circ)
printf("Area of Square: %.2f\n", sq.base.calculateArea(&sq));
printf("Area of Circle: %.2f\n", circ.base.calculateArea(&circ));

return 0;
}