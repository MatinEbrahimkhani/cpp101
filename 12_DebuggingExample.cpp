// ============================================================
// Lesson 12: Debugging
// ============================================================
// Every programmer, every single day, deals with code that
// doesn't do what they expected. Debugging isn't a sign you did
// something wrong - it's most of the actual job. This lesson is
// about building the habit of finding bugs calmly and methodically.
// ============================================================

#include <iostream>

int main() {
    // ------------------------------------------------------------
    // ACTIVE BUG: division by zero
    // ------------------------------------------------------------
    // Run this program. It will likely crash or behave strangely,
    // because dividing an integer by zero is undefined behavior.
    int x = 10, y = 0;
    int z = x / y;
    std::cout << "z = " << z << std::endl;

    // ------------------------------------------------------------
    // HOW TO DEBUG THIS (do these in order):
    // 1. Read the error/crash message carefully - what line does
    //    it point to?
    // 2. Add a std::cout right BEFORE the crash printing the values
    //    of x and y - is y really 0? Why?
    // 3. Set a breakpoint on the "int z = x / y;" line in VS Code
    //    (click just left of the line number) and press F5 to
    //    start debugging. Step through with F10 and watch the
    //    Variables panel.
    // 4. Fix it: add a check `if (y == 0) { ... }` before dividing.
    // ------------------------------------------------------------

    return 0;
}

// ============================================================
// MORE BUGS TO PRACTICE ON
// ============================================================
// Comment out the code inside main() above, and try these ONE AT
// A TIME by pasting each block into main(). Predict what's wrong
// BEFORE you run it, then confirm.

// --- Bug B: off-by-one error ---
// std::vector<int> nums = {1, 2, 3, 4, 5};
// for (int i = 0; i <= nums.size(); i++) {   // bug: should be <
//     std::cout << nums[i] << std::endl;      // reads past the end!
// }

// --- Bug C: infinite loop ---
// int count = 0;
// while (count < 5) {
//     std::cout << count << std::endl;
//     // bug: forgot count++, this never ends. Use Ctrl+C to stop it.
// }

// --- Bug D: uninitialized variable ---
// int total;                    // bug: never given a starting value
// for (int i = 1; i <= 5; i++) {
//     total += i;                // adding to garbage memory
// }
// std::cout << total << std::endl;   // unpredictable result

// --- Bug E: using = instead of == ---
// int score = 75;
// if (score = 100) {             // bug: this ASSIGNS 100, always true!
//     std::cout << "Perfect score!" << std::endl;
// }

// ============================================================
// EXERCISES
// ============================================================
// 1. Fix Bug B, C, D, and E above (one at a time) and confirm
//    each one behaves correctly after your fix.
// 2. Turn on compiler warnings: build with `g++ -Wall -Wextra` -
//    it will catch Bug D and E automatically! Compilers are
//    smarter than they get credit for - always read the warnings.
// 3. Challenge: write a short program with ONE bug you invent
//    yourself, give it to a friend or classmate, and see how fast
//    they can find it.
// ============================================================
