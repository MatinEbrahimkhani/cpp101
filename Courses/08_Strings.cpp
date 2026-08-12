// ============================================================
// Lesson 08: Strings
// ============================================================
// std::string is how C++ represents text. Unlike cin >> which
// stops at the first space, std::getline reads a WHOLE line -
// exactly what you need for names, sentences, etc.
// ============================================================

#include <iostream>
#include <string>

// Helper function: reverse a string, one character at a time
std::string reverseString(const std::string& s) {
    std::string result = "";
    for (int i = (int)s.length() - 1; i >= 0; i--) {
        result += s[i];
    }
    return result;
}

int main() {
    // --- Example 1: reading a full line ---
    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;

    // --- Example 2: string operations ---
    std::string greeting = "Hello";
    std::string target = "World";
    std::string combined = greeting + ", " + target + "!"; // + joins strings
    std::cout << combined << std::endl;
    std::cout << "Length: " << combined.length() << " characters" << std::endl;
    std::cout << "First character: " << combined[0] << std::endl;

    // --- Example 3: using the helper function to reverse a word ---
    std::string word = "Amirreza";
    std::cout << "\n" << word << " reversed is " << reverseString(word) << std::endl;

    // --- Example 4: checking a palindrome using the same helper ---
    std::string test = "level";
    if (test == reverseString(test)) {
        std::cout << test << " is a palindrome!" << std::endl;
    } else {
        std::cout << test << " is not a palindrome." << std::endl;
    }

    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Ask the user for a word and print whether it's a palindrome
//    (reuse the reverseString helper above).
// 2. Ask for a sentence with getline, then count how many vowels
//    (a, e, i, o, u) it contains.
// 3. Write a function `int countChar(std::string s, char c)` that
//    counts how many times a specific character appears.
// 4. Challenge: capitalize the first letter of every word in a
//    sentence (hint: look up `toupper` from <cctype>, and find
//    the spaces to know where each word starts).
// ============================================================
