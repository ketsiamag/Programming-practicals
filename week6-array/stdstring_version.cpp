// ACTIVITY 3B: STD::STRING VERSION
// Learning Outcome: Evaluate C-strings vs std::string
// ============================================================

#include <iostream>
#include <string> // For std::string
using namespace std;

int main() {

// Declare a std::string variable (no fixed size needed)
string name;

// Ask the user to enter their name
cout << "Enter your name: ";
getline(cin, name); // Reads a full line into the string

// Display the name
cout << "Name: " << name << endl;

// Use the length() method to find the length
cout << "Length: " << name.length() << endl;

// Display the first character
cout << "First character: " << name[0] << endl;

// Copy the string using the assignment operator
string copy = name;
cout << "Copy: " << copy << endl;

// Concatenate strings using the + operator
string greeting = "Hello, " + name + "!";
cout << greeting << endl;

return 0;
}