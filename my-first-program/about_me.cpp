#include <iostream>
#include <string>

using namespace std;

int main() {

    // ============================================================
    // VARIABLE DECLARATIONS
    // These are the "storage boxes" where we keep user answers
    // ============================================================

    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;
    string job;
    string food;

    // ============================================================
    // QUESTION 1: NAME
    // ============================================================

    cout << "========================================" << endl;
    cout << "       WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "1. What is your name? ";
    getline(cin, name);

    // Validation: Check if the user entered a name
    if (name.empty()) {
        cout << "You didn't enter a name!" << endl;
    }

    // ============================================================
    // QUESTION 2: COURSE
    // ============================================================

    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);

    // ============================================================
    // QUESTION 3: HOBBY
    // ============================================================

    cout << "3. What is your hobby? ";
    getline(cin, hobby);

    // ============================================================
    // QUESTION 4: REASON FOR CHOOSING THE COURSE
    // ============================================================

    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    // ============================================================
    // QUESTION 5: EXPECTATIONS
    // ============================================================

    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);

    // ============================================================
    // QUESTION 6: DEFINITION OF PROGRAMMING
    // ============================================================

    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);

    // ============================================================
    // QUESTION 7: DREAM JOB
    // ============================================================

    cout << "7. What is your dream job? ";
    getline(cin, job);

    // ============================================================
    // QUESTION 8: FAVORITE FOOD
    // ============================================================

    cout << "8. What is your favorite food? ";
    getline(cin, food);

    // ============================================================
    // PROFILE SUMMARY
    // ============================================================

    cout << endl;
    cout << "========================================" << endl;
    cout << "          YOUR PROFILE SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason: " << reason << endl;
    cout << "Expectation: " << expectation << endl;
    cout << "Programming is: " << definition << endl;
    cout << "Dream Job: " << job << endl;
    cout << "Favorite Food: " << food << endl;

    cout << endl;

    cout << "========================================" << endl;
    cout << "       Thank you for completing this!" << endl;
    cout << "========================================" << endl;

    cout << "========================================" << endl;
    cout << "Great job, " << name
         << "! You are on your way to becoming a programmer!" << endl;
    cout << "========================================" << endl;

    return 0;
}