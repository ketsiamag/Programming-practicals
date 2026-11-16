// ACTIVITY 2: IGNORING FILE ERRORS
// Learning Outcome: Analyse unhandled file errors
#include <iostream>
#include <fstream>
using namespace std;

int main() {
// We are trying to open a file called "missing_file.txt" which DOES NOT EXIST.
ifstream myFile("missing_file.txt");

// WE ARE SKIPPING THE is_open() CHECK!
// Let's see what happens.

string data;

cout << "Attempting to read from missing file..." << endl;

// Attempting to read from a failed stream
myFile >> data;

// What will print here? Will the program crash? Will it print garbage?
cout << "Data read: " << data << endl;
cout << "Program continued running without crashing." << endl;

return 0;
}