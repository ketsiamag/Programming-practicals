// ACTIVITY 1: BASIC FILE I/O
// Learning Outcome: Read numbers from a file, sum them, write to a file

#include <iostream>
#include <fstream> // REQUIRED for file input/output
using namespace std;

int main() {
// 1. OPEN FILE FOR READING (INPUT)
// ifstream stands for "input file stream"
ifstream inputFile("numbers.txt");

// Check if the file was successfully opened
if (!inputFile.is_open()) {
cout << "Error: Could not open numbers.txt for reading!" << endl;
return 1; // Exit with error code
}

int num;
int sum = 0;

cout << "Reading numbers from file..." << endl;

// 2. READ DATA IN A LOOP
// The '>>' operator extracts data from the file just like 'cin'.
// It returns false when it reaches the end of the file.
while (inputFile >> num) {
cout << "Read: " << num << endl;
sum += num;
}

// 3. CLOSE THE FILE
// Always close a file when you are done with it to free up system resources.
inputFile.close();

cout << "Total Sum: " << sum << endl;

// 4. OPEN FILE FOR WRITING (OUTPUT)

// ofstream stands for "output file stream"
// If sum.txt doesn't exist, it creates it. If it does, it overwrites it!
ofstream outputFile("sum.txt");

if (!outputFile.is_open()) {
cout << "Error: Could not create sum.txt for writing!" << endl;
return 1;
}

// 5. WRITE DATA TO THE FILE
// The '<<' operator writes to the file just like 'cout' writes to the screen.
outputFile << "The total sum is: " << sum << endl;
outputFile << "Calculated automatically by the C++ program." << endl;

// 6. CLOSE THE OUTPUT FILE
outputFile.close();

cout << "Result successfully saved to sum.txt!" << endl;

return 0;
}