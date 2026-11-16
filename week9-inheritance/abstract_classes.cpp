// ACTIVITY 3: ABSTRACT CLASSES
// Learning Outcome: Evaluate pure virtual functions
#include <iostream>
using namespace std;

class Shape {
public:
// PURE VIRTUAL FUNCTION: The "= 0" makes this an abstract class.
// It means "I don't know how to calculate area, but my children MUST."
virtual double calculateArea() = 0;
};

class Square : public Shape {
private:
double side;
public:

Square(double s) { side = s; }

// We MUST provide an implementation here, otherwise it won't compile.
double calculateArea() {
return side * side;
}
};

class Circle : public Shape {
private:
double radius;
public:
Circle(double r) { radius = r; }

// We MUST provide an implementation here too.
double calculateArea() {
return 3.14159 * radius * radius;
}
};

int main() {
// UNCOMMENT THE LINE BELOW TO SEE THE COMPILER ERROR
// Shape myShape; // ERROR: Cannot instantiate an abstract class!

Square s(5.0);
Circle c(3.0);

cout << "Area of Square: " << s.calculateArea() << endl;
cout << "Area of Circle: " << c.calculateArea() << endl;

return 0;
}