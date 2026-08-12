// ============================================================
// Lesson 10: File I/O
// ============================================================
// Everything your program does disappears when it closes...
// unless you save it to a file. This is how programs remember
// things between runs, like high scores or saved settings.
// ============================================================

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // --- Example 1: writing to a file ---
    std::ofstream outFile("data.txt");
    outFile << 123 << " " << 4.56 << std::endl;
    outFile << "Hello from the file!" << std::endl;
    outFile.close();
    std::cout << "Data written to data.txt" << std::endl;

    // --- Example 2: reading it back ---
    std::ifstream inFile("data.txt");
    int a;
    double b;
    inFile >> a >> b;
    std::cout << "Read back: " << a << " and " << b << std::endl;
    inFile.close();

    // --- Example 3: appending instead of overwriting ---
    std::ofstream logFile("log.txt", std::ios::app); // app = append
    logFile << "A new line added without erasing old ones." << std::endl;
    logFile.close();

    // --- Example 4: checking a file actually opened ---
    std::ifstream check("this_file_does_not_exist.txt");
    if (!check.is_open()) {
        std::cout << "\nAs expected - that file doesn't exist yet." << std::endl;
    }

    return 0;
}

// ------------------------------------------------------------
// ALWAYS check is_open() before trusting a file stream in real
// programs - files can be missing, misspelled, or permission-
// blocked, and your program should handle that gracefully
// instead of silently doing nothing (or crashing).
// ------------------------------------------------------------

// ============================================================
// EXERCISES
// ============================================================
// 1. Write a "diary" program: ask the user for one line of text
//    and append it to diary.txt every time the program runs.
// 2. Write a program that reads log.txt line by line (hint:
//    std::getline(inFile, line) inside a while loop) and prints
//    each line with a line number in front of it.
// 3. Save the classroom roster from Lesson 09 to a file, one
//    student per line.
// 4. Challenge: write a program that reads a list of numbers from
//    a file (one per line) and prints their sum and average.
//    This is exactly the pattern your capstone project uses for
//    saving high scores!
// ============================================================
