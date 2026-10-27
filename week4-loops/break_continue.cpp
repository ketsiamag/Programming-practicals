//========
// Break and Continue loops
//========
//include input/output stream library
#include <iostream>
using namespace std;
//main function where the program execution begins
int main() {
    //display message to the user
    cout<<"Numbers filter:Skip multiples of 3, stop at 15"<< endl;
    // Start a for loop from 1 to 20
    // Part 1: int i = 1; -> Start counting from 1
   // Part 2: i <= 20; -> Loop while i is 20 or less
   // Part 3: i++ -> Increment i by 1 each iteration
for (int i = 1; i <= 20; i++) {
    // CHECK 1: If i is exactly 15, stop the loop immediately
    // break statement exits the loop entirely
    if(i ==15){
        //dispaly message to the user to indicate that the loop is stopping
        cout<<"Breaking at" << i << "!" << endl;
        //exit loop imediately
        break;
    }
    // CHECK 2: If i is divisible by 3, skip it
// The % operator gives the remainder
// If i % 3 == 0, then i is a multiple of 3 (3, 6, 9, ...)
   if(i%3 == 0){
    // 'continue' skips the rest of this iteration
// and jumps back to the increment (i++)
continue;
   }
   //Display:this only runs if we did NOT BREAK or CONTINUE
   // So it prints numbers that are NOT multiples of 3, until we hit 15
   cout << i << " ";
 }//end of for loop
 // Move to a new line after the loop ends
cout << endl;

// Return 0 to signal successful completion
return 0;
}