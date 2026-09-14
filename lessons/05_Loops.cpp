// ============================================================
// Lesson 05: Loops (for, while, do-while)
// ============================================================
// Loops let the computer repeat work without you copy-pasting
// code 100 times. This is where computers start doing things
// that would be tedious or impossible to do by hand.
//
// Rahnamay-e Finglish:
//   for baraye vaghti-st ke midooni CHAND bar tekrar mikhay.
//   while baraye vaghti-st ke midooni TA KEY tekrar mikhay
//   (ta vaghti shart true-e). do-while hatman YEK bar ejra mishe.
// ============================================================

#include <iostream>

int main() {
    // --- Example 1: classic counting for loop ---
    // (i az 1 ta 5, har bar yeki ezafe: i++)
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // --- Example 2: while loop - repeats as long as a condition holds ---
    int count = 5;
    while (count > 0) {
        std::cout << count << "... ";
        count--;  // YADET NARE! Age in nabashe, halghe hichvaght tamoom nemishe.
    }
    std::cout << "Liftoff!" << std::endl;

    // --- Example 3: do-while - always runs its body at least once ---
    // (bedoon voroodi-e vagheyi — ba meghdar-e amade, ta run kardan
    //  hichvaght gir nakone. Exercise: in ro ba cin-e vagheyi avaz kon.)
    int demo_inputs[] = {7, -2, 0};
    for (int input : demo_inputs) {
        std::cout << "Voroodi: " << input;
        if (input == 0) std::cout << " -> stop! (tavaghghof)";
        else std::cout << " -> edame...";
        std::cout << std::endl;
    }

    // --- Example 4: nested loops - a multiplication table ---
    std::cout << "\nMultiplication table (1-5):" << std::endl;
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            std::cout << row * col << "\t";
        }
        std::cout << std::endl;
    }

    // --- Example 5: the modulo operator % - remainder after division ---
    // % baghimande mide: 10 % 3 = 1 (chon 10 = 3*3 + 1).
    // In baraye zoj/fard (even/odd) va FizzBuzz kheyli mohem-e.
    std::cout << "\n10 % 3 = " << (10 % 3) << std::endl;   // 1
    std::cout << "9 % 3 = " << (9 % 3) << std::endl;       // 0 - divides evenly

    return 0;
}

// ------------------------------------------------------------
// WATCH OUT: an "infinite loop" happens when the condition never
// becomes false (e.g. forgetting count-- above). If your program
// seems frozen, that's almost always what happened - press
// Ctrl+C in the terminal to force-stop it.
// (Halghe-ye bi-payan: shart hichvaght false nemishe — Ctrl+C bezan.)
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

