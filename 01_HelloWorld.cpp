// ============================================================
// Lesson 01: Hello World
// ============================================================
// Every C++ program starts somewhere. That "somewhere" is a
// function called main(). When you run this program, the
// computer runs everything inside main()'s curly braces { }
// from top to bottom.
// ============================================================

#include <iostream>   // gives us std::cout, the tool we use to print text
                      // "جریان ورودی و خروجی" = input/output stream

int main() {
    // std::cout is how C++ prints to the screen.
    // The << arrow "sends" text into cout, like pouring water into a cup.
    std::cout << "Hello, World!" << std::endl;

    // std::endl ends the line (like pressing Enter) and flushes the
    // output so it actually shows up on screen right away.
    std::cout << "Ramadan's grandson says hi too." << std::endl;

    // You can print numbers just as easily as text - no quotes needed.
    std::cout << "2 + 2 = " << 2 + 2 << std::endl;

    // Every main() should end with this - it tells the operating
    // system "the program finished successfully."
    return 0;
}

// ------------------------------------------------------------
// Expected output:
// Hello, World!
// Ramadan's grandson says hi too.
// 2 + 2 = 4
// ------------------------------------------------------------

// ============================================================
// EXERCISES - do these before moving to lesson 2
// ============================================================
// 1. Add a line that prints YOUR name instead of "World".
// 2. Print your age using a math expression (e.g. 2026 - your
//    birth year) instead of just typing the number.
// 3. Try deleting the semicolon after one of the cout lines,
//    save, and try to build. Read the error message the compiler
//    gives you - this is a skill you'll use every single day as
//    a programmer. Put the semicolon back when you're done.
// 4. Bonus: print a small 3-line "picture" using only text
//    characters, e.g. a tiny house or a smiley face.
// ============================================================
