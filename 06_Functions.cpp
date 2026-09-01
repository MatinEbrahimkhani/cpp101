// ============================================================
// Lesson 06: Functions
// ============================================================
// A function is a named, reusable block of code. You've already
// been using one every single lesson: int main(). Now you'll
// write your own.
// ============================================================

#include <iostream>

// --- Example 1: a function that returns a value ---
int square(int x) {
    return x * x;
}

// --- Example 2: a function with two parameters ---
int add(int a, int b) {
    return a + b;
}

// --- Example 3: a void function - does something, returns nothing ---
void printLine() {
    std::cout << "------------------------" << std::endl;
}

// --- Example 4: a function that calls another function ---
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 4;
    std::cout << "Square of " << num << " is " << square(num) << std::endl;
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;

    printLine();

    for (int i = 2; i <= 20; i++) {
        if (isPrime(i)) {
            std::cout << i << " is prime" << std::endl;
        }
    }

    return 0;
}

// ------------------------------------------------------------
// Why bother with functions? Once your programs get bigger than
// a few lines, functions are how you keep them organized,
// testable, and reusable - instead of one giant main() nobody
// (including future you) can read.
// ------------------------------------------------------------

// ============================================================
// EXERCISES
// ============================================================
// 1. Write `int cube(int x)` that returns x*x*x. Test it in main.
// 2. Write `double celsiusToFahrenheit(double c)` and use it to
//    convert a few temperatures.
// 3. Write `int factorial(int n)` (5! = 5*4*3*2*1 = 120) using a
//    loop inside the function.
// 4. Challenge: write `bool isPalindromeNumber(int n)` that checks
//    if a number reads the same forwards and backwards (like 121
//    or 1331). Hint: reverse the digits and compare.
// ============================================================
