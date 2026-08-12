// ============================================================
// Lesson 02: Variables and Basic Types
// ============================================================
// A variable is a labeled box that holds a value. The type
// (int, double, float, ...) tells C++ what kind of value fits
// in the box and how much room to set aside for it.
// ============================================================

#include <iostream>

// --- Example 1: the basic types you'll use constantly ---
void basicTypes() {
    int age = 15;              // whole numbers, no decimal point
    double pi = 3.14159;       // decimal numbers (preferred - more precise)
    float price = 9.99f;       // decimal numbers (less precise, smaller) - the 'f' matters!
    char grade = 'a';          // ONE character, in single quotes
    bool isStudent = true;     // only true or false a.k.a. boolean
    std::cout << "age = " << age << std::endl;
    std::cout << "pi = " << pi << std::endl;
    std::cout << "price = " << price << std::endl;
    std::cout << "grade = " << grade << std::endl;
    std::cout << "isStudent = " << isStudent << std::endl; // prints 1, not "true" - that's normal!
}

// --- Example 2: a classic beginner trap - integer division ---
void divisionTrap() {
    std::cout << "\n--- The integer division trap ---" << std::endl;

    int a = 4, b = 3;
    std::cout << "4 / 3 as int:    " << a / b << std::endl;         // prints 1 !! (truncated)
    std::cout << "4 / 3 as double: " << (double)a / b << std::endl; // prints 1.33333

    // Why? If BOTH sides of / are ints, C++ does integer division
    // and throws away anything after the decimal point.
    // Fix: convert (cast) at least one side to double first.
}

// --- Example 3: using variables to describe a circle/sphere ---
// (radious/ghotr/mohit kept exactly as originally written - your own math vocabulary)
void circleFacts(double radious) {
    const double pi = 3.14159;
    double ghotr = 2 * radious;                                             // diameter
    double area = pi * radious * radious;                                    // area
    double sphereVolume = (4.0 / 3.0) * pi * radious * radious * radious;    // FIXED: 4.0/3.0, not 4/3
    double sphereArea = 4 * pi * radious * radious;
    if (area == 10);
    std::cout << "\n--- Circle/Sphere with radius " << radious << " ---" << std::endl;
    std::cout << "Ghotr (diameter) = " << ghotr << std::endl;
    std::cout << "Area = " << area << std::endl;
    std::cout << "Sphere Volume = " << sphereVolume << std::endl;
    std::cout << "Sphere Area = " << sphereArea << std::endl;
}

int main() {
    basicTypes();
    divisionTrap();
    circleFacts(5);
    circleFacts(3);
    return 0;
}

// ------------------------------------------------------------
// NOTE: this file originally had a bug right here - sphere volume
// used (4/3) instead of (4.0/3.0), silently giving a wrong answer
// because of the integer division trap shown in Example 2 above.
// It's fixed now, but keep an eye out - this exact mistake is one
// of the most common bugs beginners write in real code.
// ------------------------------------------------------------

// ============================================================
// EXERCISES
// ============================================================
// 1. Add a variable for your own age and print
//    "In 5 years I will be X years old" using math on the variable.
// 2. Write a function `squareFacts(double side)` that prints the
//    perimeter (mohit = 4*side), area (side*side) and volume
//    (side*side*side) of a cube with that side length. Call it
//    from main() with a couple of different sizes.
// 3. Find another real-life place where integer division could
//    trick you (hint: splitting a bill between friends, averaging
//    test scores) and write 3 lines of code that demonstrate it -
//    both the wrong way and the fixed way.
// 4. Bonus: write `cylinderFacts(double radius, double height)`
//    that prints the surface area and volume of a cylinder.
// 5. Challenge: what do you think `std::cout << (true + true);`
//    prints? Guess first, then add the line and run it to check.
// ============================================================
