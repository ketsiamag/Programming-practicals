// ACTIVITY 4: POLYMORPHIC DRAWING PROGRAM
// Learning Outcome: Create a polymorphic application
#include <iostream>
#include <vector>
using namespace std;

// 1. ABSTRACT BASE CLASS
class Shape {
public:
// Pure virtual function. Every shape MUST implement this.
virtual void draw() = 0;

// Virtual Destructor: Crucial for cleaning up derived objects properly!
virtual ~Shape() {}
};

// 2. DERIVED CLASSES
class Circle : public Shape {
public:
void draw() override { // 'override' is a safety feature to ensure we are correctly overriding


cout << "Drawing a Circle ◯" << endl;
}
};

class Rectangle : public Shape {
public:
void draw() override {
cout << "Drawing a Rectangle ▭" << endl;
}
};

class Triangle : public Shape {
public:
void draw() override {
cout << "Drawing a Triangle △" << endl;
}
};

// 3. A POLYMORPHIC FUNCTION
// This function doesn't care WHAT the shape is. It just knows it's a Shape.
void renderCanvas(Shape* s) {
s->draw(); // Dynamic binding decides which draw() to call!
}

int main() {
// We use a vector to store pointers to our Shapes
vector<Shape*> canvas;

// We add different derived objects to the vector
canvas.push_back(new Circle());
canvas.push_back(new Rectangle());
canvas.push_back(new Triangle());
canvas.push_back(new Circle());

cout << "--- Rendering Canvas ---" << endl;

// Loop through the canvas and draw everything
for (int i = 0; i < canvas.size(); i++) {
renderCanvas(canvas[i]);
}

cout << "\n--- Cleaning Up Memory ---" << endl;
// Clean up the heap memory
for (int i = 0; i < canvas.size(); i++) {
delete canvas[i];
}

return 0;
}