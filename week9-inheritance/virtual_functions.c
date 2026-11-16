// ACTIVITY 2: SIMULATING VIRTUAL FUNCTIONS
// Learning Outcome: Analyse function pointer
#include <stdio.h>
#include <string.h>

// 1. Define a Function Pointer Type
// This pointer will point to a function that takes no arguments and returns void.
typedef void (*SpeakFunction)();

// Base Struct
struct Animal {
// The function pointer (simulating the virtual table)
SpeakFunction speak;
};

// Derived Struct (inherits from Animal)
struct Dog {
struct Animal base; // Embed the base
};

// --- The actual functions ---
void genericSound() {
printf("Animal makes a generic sound.\n");
}


void dogBark() {
printf("Dog barks: Woof! Woof!\n");
}

int main() {
printf("--- Simulating Non-Virtual (Base only) ---\n");
struct Animal myAnimal;
myAnimal.speak = genericSound;
myAnimal.speak(); // Calls genericSound()

printf("\n--- Simulating Virtual (Dynamic binding) ---\n");
struct Dog myDog;

// OVERRIDE: We assign the dogBark function to the inherited function pointer
myDog.base.speak = dogBark;

// POLYMORPHISM: We cast the Dog pointer to an Animal pointer
struct Animal* pet = (struct Animal*)&myDog;

// We call the function via the pointer!
pet->speak(); // <--- ANALYZE THIS LINE

return 0;
}