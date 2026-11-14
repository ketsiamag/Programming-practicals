// ACTIVITY 2: STACK VS HEAP OBJECTS
// Learning Outcome: Analyse stack vs heap allocation
// ============================================================

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
string model;

// Constructor
Car(string m) {
model = m;
cout << "Car created: " << model << endl;
}

// Destructor: Runs automatically when a STACK object is destroyed
~Car() {
cout << "Car destroyed: " << model << endl;
}
};

int main() {

cout << "--- Creating Stack Object ---" << endl;
// STACK ALLOCATION: Memory is managed automatically.
// Note: No 'new' keyword.
Car stackCar("Toyota");

cout << "\n--- Creating Heap Object ---" << endl;
// HEAP ALLOCATION: Memory is managed manually using 'new'.
// Note: We use a pointer (*) to hold the memory address.
Car* heapCar = new Car("Honda");

// To access the heap object's members, we use the arrow operator (->)
cout << "Heap car model: " << heapCar->model << endl;

cout << "\n--- End of main function ---" << endl;

// We MUST manually delete the heap object to avoid a memory leak.
// This will trigger the destructor for the Honda.
delete heapCar;

// The stack object (Toyota) is destroyed AUTOMATICALLY here,
// right before the program ends, because it goes out of scope.
return 0;
}