
#include <iostream> // Allows input and output
#include <iomanip>  // Provides setw() for formatting numbers
using namespace std;

int main() {

    // Display the title and top border
    cout << "========================================" << endl;
    cout << " MULTIPLICATION TABLE (1 to 10)" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // OUTER LOOP: Controls the rows, from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // INNER LOOP: Controls the columns, from 1 to 10
        for (int j = 1; j <= 10; j++) {

            // Multiply the current row by the current column
            // setw(5) gives each result a minimum width of 5
            cout << setw(5) << i * j;
        }

        // Move to a new line after printing one complete row
        cout << endl;
    }

    // Display the bottom border
    cout << "========================================" << endl;

    return 0; // End the program successfully
}
