// ACTIVITY 3: EVALUATING STRUCT DESIGN IN C
// Learning Outcome: Evaluate encapsulation violations
// ============================================================

#include <stdio.h>

// ==========================================
// THE BAD DESIGN (Violation of Encapsulation)
// ==========================================
struct BadBankAccount {
// Everything is public and directly accessible!
double balance;
};

// ==========================================
// THE GOOD DESIGN (Proper Encapsulation)

// ==========================================
struct GoodBankAccount {
double balance; // Still public to the compiler, but we rely on functions!
};

// A function to safely deposit money
void goodDeposit(struct GoodBankAccount *acc, double amount) {
if (amount > 0) {
acc->balance += amount;
}
}

int main() {
printf("--- Testing BAD Design ---\n");
struct BadBankAccount badAccount;
badAccount.balance = 100.0;

// Direct access! No validation. We can hack the account.
badAccount.balance = -5000.00; // Impossible in real life!
printf("Bad Account Balance: %.2f\n", badAccount.balance);

printf("\n--- Testing GOOD Design ---\n");
struct GoodBankAccount goodAccount;
goodAccount.balance = 100.0;

// We rely on the programmer using the safe function.
goodDeposit(&goodAccount, 500.00);
printf("Good Account Balance: %.2f\n", goodAccount.balance);

return 0;
}