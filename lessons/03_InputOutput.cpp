// ============================================================
// Lesson 03: Input and Output
// ============================================================
// So far your programs only ever say what YOU hard-coded.
// std::cin lets the program ask the user something and wait
// for an answer - this is where programs start to feel alive.
// ============================================================

#include <iostream>

int main() {
    // --- Example 1: reading a single number ---
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;

    // --- Example 2: reading two numbers and doing math with them ---
    double a, b;
    std::cout << "\nEnter two numbers separated by a space: ";
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;

    // --- Example 3: a tiny "calculator" using an operator character ---
    double x, y;
    char op;
    std::cout << "\nEnter a calculation like: 5 + 3  -> ";
    std::cin >> x >> op >> y;
    if (op == '+') std::cout << "Result: " << x + y << std::endl;
    else if (op == '-') std::cout << "Result: " << x - y << std::endl;
    else if (op == '*') std::cout << "Result: " << x * y << std::endl;
    else if (op == '/') std::cout << "Result: " << x / y << std::endl;
    else std::cout << "I don't know that operator yet." << std::endl;

    return 0;
}

// ------------------------------------------------------------
// Note: std::cin >> stops reading at the first space, so it can't
// read a full name like "Amir Reza" into one variable yet. We'll
// fix that properly in Lesson 08 (Strings) with std::getline.
// ------------------------------------------------------------

// ============================================================
// EXERCISES
// ============================================================
// 1. Ask for a temperature in Celsius and print it in Fahrenheit.
//    Formula: F = C * 9.0 / 5.0 + 32
// 2. Ask for a price and a discount percentage, print the final
//    price after the discount is applied.
// 3. Ask for a number of seconds, print how many whole minutes
//    and leftover seconds that is (hint: you'll want / and %,
//    the "modulo" operator you'll meet properly in Lesson 05).
// 4. Challenge: extend the mini calculator above to also support
//    '%' (remainder) as an operator.
// ============================================================
