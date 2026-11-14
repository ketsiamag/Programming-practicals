// ACTIVITY 3: EVALUATING CLASS DESIGN
// Learning Outcome: Evaluate encapsulation violations
#include <iostream>
using namespace std;

// THE BAD DESIGN (Violation of Encapsulation)
class BadBankAccount {
public:
// Everything is public! Anyone can change the balance directly.
double balance;

BadBankAccount() {
balance = 0.0;
}
};

// THE GOOD DESIGN (Proper Encapsulation)
class GoodBankAccount {
private:
// Data is hidden. It can only be changed through methods.
double balance;

public:
GoodBankAccount() {


balance = 0.0;
}

void deposit(double amount) {
if (amount > 0) {
balance += amount;
}
}

double getBalance() {
return balance;
}
};

int main() {
cout << "--- Testing BAD Design ---" << endl;
BadBankAccount badAccount;
// Direct access! No validation. We can hack the account.
badAccount.balance = -5000; // Impossible in real life!
cout << "Bad Account Balance: " << badAccount.balance << endl;

cout << "\n--- Testing GOOD Design ---" << endl;
GoodBankAccount goodAccount;

// goodAccount.balance = -5000; // ERROR! Private! The compiler will block this!


// We must use the safe method.
goodAccount.deposit(1000);
cout << "Good Account Balance: " << goodAccount.getBalance() << endl;

return 0;
}