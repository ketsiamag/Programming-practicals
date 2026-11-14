// ACTIVITY 4: BANK ACCOUNT STRUCT IN C
// Learning Outcome: Create a struct with methods and validation
// ============================================================

#include <stdio.h>
#include <string.h>

struct BankAccount {
char accountHolder[50];
double balance;
};

// Function to simulate the constructor
void initAccount(struct BankAccount *acc, const char *name, double initialBalance) {
strcpy(acc->accountHolder, name);
// Only allow a positive initial balance
if (initialBalance >= 0) {
acc->balance = initialBalance;
} else {
acc->balance = 0;
printf("Warning: Initial balance cannot be negative. Set to 0.\n");
}
}


// Function to deposit money
void deposit(struct BankAccount *acc, double amount) {
// VALIDATION: Check if the deposit is a positive number
if (amount > 0) {
acc->balance += amount;
printf("Successfully deposited: $%.2f\n", amount);
} else {
printf("Error: Deposit amount must be greater than 0.\n");
}
}

// Function to withdraw money
void withdraw(struct BankAccount *acc, double amount) {
// VALIDATION 1: Check if amount is positive
if (amount <= 0) {
printf("Error: Withdrawal amount must be greater than 0.\n");
return; // Exit the function early
}

// VALIDATION 2: Check if there are sufficient funds
if (amount > acc->balance) {
printf("Error: Insufficient funds! Current balance is $%.2f\n", acc->balance);
} else {
acc->balance -= amount;
printf("Successfully withdrew: $%.2f\n", amount);


}
}

// Function to check balance
void displayBalance(struct BankAccount *acc) {
printf("Account Holder: %s\n", acc->accountHolder);
printf("Current Balance: $%.2f\n", acc->balance);
}

int main() {
printf("--- Opening Account ---\n");
// Create a BankAccount struct on the stack
struct BankAccount aliceAccount;

// Initialize the account
initAccount(&aliceAccount, "Alice Smith", 500.00);
displayBalance(&aliceAccount);

printf("\n--- Attempting Deposits ---\n");
deposit(&aliceAccount, 200.00); // Valid
deposit(&aliceAccount, -50.00); // Invalid

printf("\n--- Attempting Withdrawals ---\n");
withdraw(&aliceAccount, 100.00); // Valid
withdraw(&aliceAccount, 1000.00); // Invalid (insufficient funds)
withdraw(&aliceAccount, -20.00); // Invalid (negative)


printf("\n--- Final Account Status ---\n");
displayBalance(&aliceAccount);

return 0;
}