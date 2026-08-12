// ============================================================
// Lesson 11: Simple Algorithms
// ============================================================
// An algorithm is just a precise recipe for solving a problem.
// You already know several without realizing it - here are a
// few classics every programmer eventually writes by hand.
// ============================================================

#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

// --- Example 1: summing a range ---
int sumTo(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}

// --- Example 2: recursion - a function that calls itself ---
int factorial(int n) {
    if (n <= 1) return 1;           // base case - stops the recursion
    return n * factorial(n - 1);    // recursive case
}

// --- Example 3: linear search - check items one by one ---
int linearSearch(const std::vector<int>& v, int target) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == target) return (int)i; // found it, return the index
    }
    return -1; // not found
}

// --- Example 4: bubble sort - repeatedly swap neighbors out of order ---
void bubbleSort(std::vector<int>& v) {
    for (size_t pass = 0; pass < v.size(); pass++) {
        for (size_t i = 0; i + 1 < v.size(); i++) {
            if (v[i] > v[i + 1]) {
                std::swap(v[i], v[i + 1]);
            }
        }
    }
}

int main() {
    std::cout << "Sum 1..10 = " << sumTo(10) << std::endl;
    std::cout << "5! = " << factorial(5) << std::endl;

    std::vector<int> nums = {8, 3, 1, 9, 5};
    int index = linearSearch(nums, 9);
    std::cout << "9 found at index: " << index << std::endl;

    bubbleSort(nums);
    std::cout << "Sorted: ";
    for (int n : nums) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Write `int findMax(std::vector<int> v)` without using any
//    library function - just a loop.
// 2. Write `void countDown(int n)` recursively that prints n,
//    n-1, ..., down to 1 (each call prints one number).
// 3. After bubbleSort runs, the vector is sorted - write a
//    `binarySearch` function that finds a target much faster by
//    repeatedly checking the middle and eliminating half the list.
//    (Ask for hints if you get stuck - this one's a real challenge!)
// 4. Challenge: count how many comparisons linearSearch takes vs.
//    your binarySearch to find a number in a sorted vector of 1000
//    items. Which one wins, and why?
// ============================================================
