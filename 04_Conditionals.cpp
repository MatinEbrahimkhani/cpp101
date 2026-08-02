// ============================================================
// Lesson 04: Conditionals (if / else if / else)
// ============================================================
// Programs get interesting once they can make decisions.
// A condition is anything that evaluates to true or false,
// and if/else lets your program choose which code to run.
// ============================================================

#include <iostream>
#include <string>

int main() {
    // --- Example 1: basic if / else if / else ---
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    if (x > 0) {
        std::cout << "Positive" << std::endl;
    } else if (x == 0) {
        std::cout << "Zero" << std::endl;
    } else {
        std::cout << "Negative" << std::endl;
    }

    // --- Example 2: combining conditions with && (and), || (or) ---
    int score;
    std::cout << "\nEnter a test score (0-100): ";
    std::cin >> score;

    if (score < 0 || score > 100) {
        std::cout << "That's not a valid score." << std::endl;
    } else if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else if (score >= 60) {
        std::cout << "Grade: D" << std::endl;
    } else {
        std::cout << "Grade: F" << std::endl;
    }

    // --- Example 3: the ternary operator - a compact if/else ---
    // condition ? valueIfTrue : valueIfFalse
    int n;
    std::cout << "\nEnter a number to check even/odd: ";
    std::cin >> n;
    std::string parity = (n % 2 == 0) ? "even" : "odd";
    std::cout << n << " is " << parity << std::endl;

    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Ask for a year, print whether it's a leap year.
//    (Rule: divisible by 4, EXCEPT century years like 1900 unless
//     they're also divisible by 400, like 2000.)
// 2. Ask for three numbers, print the largest of the three.
// 3. Ask the user to pick rock, paper, or scissors, hard-code the
//    computer's choice as "paper", and print who wins.
//    (This is a taste of your final capstone project!)
// 4. Challenge: ask for a person's height in meters and weight in
//    kg, compute BMI = weight / (height*height), and print a
//    category: <18.5 underweight, 18.5-24.9 normal, 25-29.9
//    overweight, 30+ obese.
// ============================================================
