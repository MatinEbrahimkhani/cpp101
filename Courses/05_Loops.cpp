// ============================================================
// Lesson 05: Loops (for, while, do-while)
// ============================================================
// Loops let the computer repeat work without you copy-pasting
// code 100 times. This is where computers start doing things
// that would be tedious or impossible to do by hand.
// ============================================================

#include <iostream>

int main() {
    // --- Example 1: classic counting for loop ---
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // --- Example 2: while loop - repeats as long as a condition holds ---
    int count = 5;
    while (count > 0) {
        std::cout << count << "... ";
        count--;
    }
    std::cout << "Liftoff!" << std::endl;

    // --- Example 3: do-while - always runs its body at least once ---
    int input;
    do {
        std::cout << "\nEnter a positive number (0 to stop): ";
        std::cin >> input;
        std::cout << "You entered: " << input << std::endl;
    } while (input != 0);

    // --- Example 4: nested loops - a multiplication table ---
    std::cout << "\nMultiplication table (1-5):" << std::endl;
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            std::cout << row * col << "\t";
        }
        std::cout << std::endl;
    }

    // --- Example 5: the modulo operator % - remainder after division ---
    std::cout << "\n10 % 3 = " << (10 % 3) << std::endl;   // 1
    std::cout << "9 % 3 = " << (9 % 3) << std::endl;       // 0 - divides evenly

    return 0;
}

// ------------------------------------------------------------
// WATCH OUT: an "infinite loop" happens when the condition never
// becomes false (e.g. forgetting count-- above). If your program
// seems frozen, that's almost always what happened - press
// Ctrl+C in the terminal to force-stop it.
// ------------------------------------------------------------

// ============================================================
// EXERCISES
// ============================================================
// 1. Print all even numbers from 1 to 20 using a for loop and %.
// 2. Print a triangle of stars, 5 rows tall:
//      *
//      **
//      ***
//      ****
//      *****
// 3. FIZZBUZZ (a famous exercise!): print numbers 1 to 30, but
//    - if divisible by 3, print "Fizz" instead of the number
//    - if divisible by 5, print "Buzz" instead
//    - if divisible by both, print "FizzBuzz"
// 4. Challenge: use a while loop to find the sum of digits of a
//    number the user enters (e.g. 1234 -> 1+2+3+4 = 10). Hint:
//    n % 10 gives the last digit, n / 10 removes it.
// ============================================================
