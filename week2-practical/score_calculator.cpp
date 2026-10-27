#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
     // ============================================================  
     // VARIABLE DECLARATIONS 
    // Each variable is a storage box with a specific data type.  // ============================================================   
    string studentName;
    string course; // Text - stores the student's name  string course; // Text - stores the course (BBIT/BCS) 
    int score1, score2, score3;
    int totalScore; // Whole numbers - test scores  int totalScore; // Whole number - sum of scores 
    double average; // Decimal number - average score  double percentage; // Decimal number - percentage
    double percentage;// decimal number-percentage
    // CONSTANT DECLARATION 
   // A constant cannot be changed during program execution. 
  // ============================================================   
   const int MAX_SCORE = 100; // Maximum possible score per test 
 cout << "========================================" << endl;
   cout << " STUDENT SCORE CALCULATOR" << endl;  
   cout << "========================================" << endl;  cout << endl;

   cout << "Enter course (BBIT/BCS): "; 
   getline(cin, course); 

    cout << "Enter score for test 1: ";
   cin >> score1; // Reads the integer score
    cout << "Enter score for test 2: ";
   cin >> score2; // Reads the integer score
    cout << "Enter score for test 3: ";
   cin >> score3; // Reads the integer score
   totalScore = score1 + score2 + score3;
 // The / operator divides totalScore by 3. 
 // We use 3.0 (double) to get decimal division. 
 // If we used 3 (int), the result would be truncated. 
 // ============================================================   
    average = totalScore / 3.0; 
 // Formula: (totalScore / maximumPossible) * 100
 // maximumPossible = 3 tests × 100 marks = 300 
 // ============================================================   
 percentage = (totalScore / 300.0) * 100; 
cout << "DEBUG - Total: " << totalScore << endl; 
 // ============================================================ 
  // DISPLAY REPORT CARD 
 // fixed << setprecision(2) formats decimals to 2 places. 
 // ============================================================   
 cout << endl; 
 cout << "========================================" << endl;  cout << " REPORT CARD" << endl; 
 cout << "========================================" << endl;  cout << endl; 
  
 cout << "Student: " << studentName << endl; 
 cout << "Course: " << course << endl; 
 cout << endl; 
 cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
 cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
 cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;  cout << endl; 
 cout << "Total: " << totalScore << "/300" << endl; 
 cout << "Average: " << fixed << setprecision(2) << average << endl; 
 cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;  
 cout << endl; 
  
 // Determine pass or fail

 if (percentage >= 50) { 
 cout << "Result: PASS" << endl; 
 } else { 
 cout << "Result: FAIL" << endl; 
 } 
 cout << "========================================" << endl; 

    return 0;
}