#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numStudents;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    cout << "How many students? ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Number of students must be greater than 0." << endl;
        return 1;
    }

    for (int student = 1; student <= numStudents; student++) {
        string name;
        double score;
        char grade;
        char modifier = ' ';
        string message;

        cout << "\nStudent " << student << endl;
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter percentage score (0-100): ";
        cin >> score;

        while (score < 0 || score > 100) {
            cout << "Invalid score! Must be between 0 and 100." << endl;
            cout << "Enter percentage score (0-100): ";
            cin >> score;
        }

        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        if (grade != 'F') {
            int lastDigit = (int)score % 10;
            if (grade == 'A') {
                if (score >= 97) modifier = '+';
                else if (score < 93) modifier = '-';
            } else if (grade == 'B' || grade == 'C' || grade == 'D') {
                if (lastDigit >= 7) modifier = '+';
                else if (lastDigit <= 3) modifier = '-';
            }
        }

        if (grade == 'A') {
            message = "Excellent work!";
        } else if (grade == 'B') {
            message = "Good job!";
        } else if (grade == 'C') {
            message = "Satisfactory.";
        } else if (grade == 'D') {
            message = "Needs improvement.";
        } else {
            message = "Please seek help.";
        }

        switch (grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'F': countF++; break;
        }

        cout << "\nName: " << name << endl;
        cout << "Score: " << fixed << setprecision(1) << score << "%" << endl;
        cout << "Grade: " << grade;
        if (modifier != ' ') cout << modifier;
        cout << endl;
        cout << "Message: " << message << endl;
    }

    cout << "\n===== SUMMARY =====" << endl;
    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl;
    cout << "F: " << countF << endl;

    return 0;
}