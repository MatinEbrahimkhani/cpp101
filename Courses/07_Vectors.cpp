// ============================================================
// Lesson 07: Vectors
// ============================================================
// An array holds a fixed number of items. A std::vector is like
// an array that can grow - you can add items as you go, which is
// what you'll want almost all of the time.
// ============================================================

#include <iostream>
#include <vector>
#include <string>

int main() {
    // --- Example 1: creating and printing a vector ---
    std::vector<int> nums = {1, 2, 3, 4, 5};
    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // --- Example 2: adding items with push_back ---
    std::vector<std::string> friends;
    friends.push_back("Amirreza");
    friends.push_back("Sadra");
    friends.push_back("Mina");

    std::cout << "\nFriends list (" << friends.size() << " people):" << std::endl;
    for (size_t i = 0; i < friends.size(); i++) {
        std::cout << i << ": " << friends[i] << std::endl;
    }

    // --- Example 3: doing math over a vector ---
    std::vector<int> scores = {85, 92, 78, 95, 60};
    int sum = 0;
    int highest = scores[0];
    for (int s : scores) {
        sum += s;
        if (s > highest) highest = s;
    }
    double average = (double)sum / scores.size();
    std::cout << "\nAverage score: " << average << std::endl;
    std::cout << "Highest score: " << highest << std::endl;

    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Make a vector of your 5 favorite numbers, print their sum.
// 2. Write a loop that finds and prints the SMALLEST value in
//    the `scores` vector above.
// 3. Ask the user to enter 5 numbers (using cin in a loop) and
//    push_back each into a vector, then print the average.
// 4. Challenge: write a function `int countAbove(std::vector<int> v,
//    int threshold)` that returns how many items in v are greater
//    than threshold. Test it with the scores vector.
// ============================================================
