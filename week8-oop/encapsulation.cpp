// ACTIVITY 1: ENCAPSULATION & ACCESS SPECIFIERS
// Learning Outcome: Apply encapsulation with getters/setters
// ============================================================

#include <iostream>
#include <string>
using namespace std;

// Define a class named 'Student'
class Student {
// 'private' means these variables CANNOT be accessed or changed from outside this class.
// This protects the data from accidental corruption.
private:
string name;
int age;

// 'public' means these methods CAN be used by code outside the class.
public:
// CONSTRUCTOR: Automatically runs when a new Student object is created.



// We use it to set the initial values.
Student(string studentName, int studentAge) {
name = studentName;
// We can call our own setter here to apply validation!
setAge(studentAge);
}

// GETTER (Accessor): A public method to safely READ the private 'name' data.
string getName() {
return name;
}

// SETTER (Mutator): A public method to safely MODIFY the private 'age' data.
void setAge(int newAge) {
// VALIDATION: We only allow the age to change if it makes sense.
if (newAge > 0 && newAge < 120) {
age = newAge;
} else {
cout << "Error: Invalid age! Age must be between 1 and 119." << endl;
// If invalid, we don't change the age, or we set a default.
age = 0;
}
}

// GETTER for age
int getAge() {


return age;
}
};

int main() {
// Create a Student object called 's1'
Student s1("Alice", 20);

// We can READ the private data using the public getter
cout << "Student Name: " << s1.getName() << endl;
cout << "Student Age: " << s1.getAge() << endl;

// We can MODIFY the data using the public setter
cout << "\nAttempting to change age to 25..." << endl;
s1.setAge(25);
cout << "New Age: " << s1.getAge() << endl;

// Trying to set an invalid age
cout << "\nAttempting to change age to -5..." << endl;
s1.setAge(-5); // This will trigger our validation error!
cout << "Age after invalid attempt: " << s1.getAge() << endl;

// UNCOMMENTING THE LINES BELOW WILL CAUSE A COMPILATION ERROR!
// s1.age = 30; // ERROR: 'age' is private!
// s1.name = "Bob"; // ERROR: 'name' is private!


return 0;
}