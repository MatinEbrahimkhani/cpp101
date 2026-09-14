// ============================================================
// Lesson 06: Functions
// ============================================================
// A function is a named, reusable block of code. You've already
// been using one every single lesson: int main(). Now you'll
// write your own.
//
// Rahnamay-e Finglish:
//   Function mesle dastor-e ghaza-st: esm dare, voroodi
//   (parameter) migire, va khorooji (return) mide.
//   void yani "hichi bar nemigardoone" — faghat kari anjam mide.
// ============================================================

#include <iostream>

int square(int x) { return x * x; }
int add(int a, int b) { return a + b; }

void printLine() {
    std::cout << "------------------------" << std::endl;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int cube(int x) { return x * x * x; }

int factorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

int main() {
    int num = 4;
    std::cout << "Square of " << num << " is " << square(num) << std::endl;
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "Cube of 3 is " << cube(3) << std::endl;
    std::cout << "5! = " << factorial(5) << std::endl;
    printLine();
    std::cout << "Primes 2..20: ";
    for (int i = 2; i <= 20; i++) {
        if (isPrime(i)) std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Write double celsiusToFahrenheit(double c). F = C*9/5+32
// 2. Write bool isEven(int n) and test it on 1..10.
// 3. Write int maxOf(int a, int b) that returns the bigger one.
// 4. Challenge: bool isPalindromeNumber(int n) (like 121, 1331).
// ============================================================
