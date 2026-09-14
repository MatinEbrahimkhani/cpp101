// ============================================================
// Lesson 04: Conditionals (if / else if / else)
// ============================================================
// Programs get interesting once they can make decisions.
// A condition is anything that evaluates to true or false,
// and if/else lets your program choose which code to run.
//
// Rahnamay-e Finglish:
//   if yani "agar". else yani "vagarna".
//   && yani "va" (har do true bashan), || yani "ya"
//   (yeki true bashe kafi-st), ! yani "na" (bargashtan).
//   == yani "mosavi ast?" — ba = (assignment) fargh dare!
// ============================================================

#include <iostream>

int main() {
    // --- Example 1: basic if / else if / else ---
    // (bedoon voroodi — ta bedoon type kardan ham output dashte bashi)
    int x = 3;
    if (x > 0) {
        std::cout << x << " is Positive" << std::endl;
    } else if (x == 0) {
        std::cout << x << " is Zero" << std::endl;
    } else {
        std::cout << x << " is Negative" << std::endl;
    }

    // --- Example 2: range check with || ---
    // Agar x az 0 ta 10 nabashe -> "out of range".
    int test_values[] = {15, -1, 4, 230};
    for (int v : test_values) {
        if (v < 0 || v > 10) {
            std::cout << v << " is out of range (0-10)" << std::endl;
        } else {
            std::cout << v << " is inside range (0-10)" << std::endl;
        }
    }

    // --- Example 3: grade table with else-if chain ---
    int score = 85;  // mesal. Exercise: in ro ba cin az user begir.
    std::cout << "\nScore = " << score << " -> ";
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

    // --- Example 4: even/odd with % ---
    int n = 7;  // mesal
    if (n % 2 == 0) {
        std::cout << n << " is even (zoj)" << std::endl;
    } else {
        std::cout << n << " is odd (fard)" << std::endl;
    }

    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Ask for a year, print whether it's a leap year (sal-e kabise).
// 2. Ask for three numbers, print the largest of the three.
// 3. Ask the user to pick rock, paper, or scissors, hard-code the
//    computer's choice as "paper", and print who wins.
// 4. Challenge: BMI = weight / (height*height), categories:
//    <18.5 underweight, 18.5-24.9 normal, 25-29.9 overweight, 30+ obese.
// ============================================================
