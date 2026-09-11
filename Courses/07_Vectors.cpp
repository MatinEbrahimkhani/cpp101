// ============================================================
// Lesson 07: Vectors - Complete Guide
// ============================================================
// A std::vector is a DYNAMIC ARRAY - it grows and shrinks as
// needed. Unlike regular arrays (which are fixed size), vectors
// are flexible, safe, and provide many built-in operations.
// 
// KEY BENEFITS:
// - Automatic memory management (no manual delete)
// - Dynamic size (grow/shrink as needed)
// - Safe indexing with bounds checking via .at()
// - Rich set of methods (.push_back, .pop_back, .insert, etc)
// - Works with any data type
// ============================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for std::sort, std::reverse, etc

int main() {
    // ========== EXAMPLE 1: Creating and Iterating ==========
    std::cout << "=== EXAMPLE 1: Creating and Iterating ===" << std::endl;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    
    // Method 1: Range-based for loop (modern, preferred)
    std::cout << "Range-based for: ";
    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    // Method 2: Traditional index-based loop
    std::cout << "Index-based for: ";
    for (size_t i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    // Method 3: Iterator-based loop (powerful for algorithms)
    std::cout << "Iterator-based for: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n" << std::endl;


    // ========== EXAMPLE 2: Dynamic Growth with push_back ==========
    std::cout << "=== EXAMPLE 2: Dynamic Growth ===" << std::endl;
    std::vector<std::string> friends;
    std::cout << "Starting size: " << friends.size() << " (capacity: " 
              << friends.capacity() << ")" << std::endl;
    
    friends.push_back("Amirreza");
    friends.push_back("Sadra");
    friends.push_back("Mina");
    friends.push_back("Hassan");
    
    std::cout << "After adding 4 friends - size: " << friends.size() 
              << " (capacity: " << friends.capacity() << ")" << std::endl;
    std::cout << "Friends list:" << std::endl;
    for (size_t i = 0; i < friends.size(); i++) {
        std::cout << "  [" << i << "] " << friends[i] << std::endl;
    }
    std::cout << std::endl;


    // ========== EXAMPLE 3: Vector Statistics ==========
    std::cout << "=== EXAMPLE 3: Vector Statistics ===" << std::endl;
    std::vector<int> scores = {85, 92, 78, 95, 60};
    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];
    
    for (int s : scores) {
        sum += s;
        if (s > highest) highest = s;
        if (s < lowest) lowest = s;
    }
    double average = (double)sum / scores.size();
    
    std::cout << "Scores: ";
    for (int s : scores) std::cout << s << " ";
    std::cout << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Highest: " << highest << std::endl;
    std::cout << "Lowest: " << lowest << std::endl << std::endl;


    // ========== EXAMPLE 4: Removing Items & Edge Cases ==========
    std::cout << "=== EXAMPLE 4: Removing Items & Edge Cases ===" << std::endl;
    std::vector<int> data = {10, 20, 30, 40, 50};
    std::cout << "Original: ";
    for (int x : data) std::cout << x << " ";
    std::cout << std::endl;
    
    // Remove last element with pop_back
    data.pop_back();
    std::cout << "After pop_back(): ";
    for (int x : data) std::cout << x << " ";
    std::cout << " (size: " << data.size() << ")" << std::endl;
    
    // Remove element at specific index using erase
    data.erase(data.begin() + 1);  // Remove index 1 (value 20)
    std::cout << "After erase index 1: ";
    for (int x : data) std::cout << x << " ";
    std::cout << " (size: " << data.size() << ")" << std::endl;
    
    // Clear entire vector
    std::vector<int> temp = {1, 2, 3};
    std::cout << "Before clear: size = " << temp.size() << std::endl;
    temp.clear();
    std::cout << "After clear: size = " << temp.size() 
              << " (empty? " << (temp.empty() ? "YES" : "NO") << ")" << std::endl << std::endl;


    // ========== EXAMPLE 5: Extreme Case - Very Large Vector ==========
    std::cout << "=== EXAMPLE 5: Extreme Case - Very Large Vector ===" << std::endl;
    std::vector<long long> massive;
    const int MILLION = 1000000;
    
    std::cout << "Creating vector with " << MILLION << " elements..." << std::endl;
    for (int i = 0; i < MILLION; i++) {
        massive.push_back(i * i);
    }
    
    std::cout << "Vector size: " << massive.size() << std::endl;
    std::cout << "First 5 elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << massive[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Last 5 elements: ";
    for (int i = MILLION - 5; i < MILLION; i++) {
        std::cout << massive[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Element at middle: " << massive[MILLION / 2] << std::endl << std::endl;


    // ========== EXAMPLE 6: Empty Vector Edge Case ==========
    std::cout << "=== EXAMPLE 6: Empty Vector Edge Case ===" << std::endl;
    std::vector<double> empty_vec;
    
    std::cout << "Empty vector - size: " << empty_vec.size() << std::endl;
    std::cout << "Is empty? " << (empty_vec.empty() ? "YES" : "NO") << std::endl;
    
    // Safe way to check before accessing
    if (!empty_vec.empty()) {
        std::cout << "First element: " << empty_vec[0] << std::endl;
    } else {
        std::cout << "Cannot access - vector is empty!" << std::endl;
    }
    
    // Add element to empty vector
    empty_vec.push_back(3.14);
    std::cout << "After push_back: size = " << empty_vec.size() 
              << ", value = " << empty_vec[0] << std::endl << std::endl;


    // ========== EXAMPLE 7: Different Data Types ==========
    std::cout << "=== EXAMPLE 7: Different Data Types ===" << std::endl;
    
    // Vector of bools (special case - packs 8 bools per byte!)
    std::vector<bool> flags = {true, false, true, true, false};
    std::cout << "Boolean vector (size: " << flags.size() << "): ";
    for (bool f : flags) {
        std::cout << (f ? "T" : "F") << " ";
    }
    std::cout << std::endl;
    
    // Vector of doubles
    std::vector<double> decimals = {3.14, 2.71, 1.41, 1.73};
    double product = 1.0;
    for (double d : decimals) product *= d;
    std::cout << "Double vector product: " << product << std::endl;
    
    // Vector of chars (like a string, but more control)
    std::vector<char> chars = {'H', 'e', 'l', 'l', 'o'};
    std::cout << "Char vector: ";
    for (char c : chars) std::cout << c;
    std::cout << std::endl << std::endl;


    // ========== EXAMPLE 8: Insert in Middle & Sorting ==========
    std::cout << "=== EXAMPLE 8: Insert in Middle & Sorting ===" << std::endl;
    std::vector<int> numbers = {3, 1, 4, 1, 5};
    
    std::cout << "Original: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    
    // Insert value 99 at position 2
    numbers.insert(numbers.begin() + 2, 99);
    std::cout << "After insert(99 at index 2): ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    
    // Sort the vector
    std::sort(numbers.begin(), numbers.end());
    std::cout << "After sort: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    
    // Reverse the vector
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "After reverse: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl << std::endl;


    // ========== EXAMPLE 9: Extreme Case - Access Bounds ==========
    std::cout << "=== EXAMPLE 9: Extreme Case - Bounds Checking ===" << std::endl;
    std::vector<int> test = {10, 20, 30};
    
    std::cout << "Vector size: " << test.size() << std::endl;
    
    // Safe access with .at() - throws exception if out of bounds
    try {
        std::cout << "Accessing index 1: " << test.at(1) << std::endl;
        std::cout << "Trying to access index 5 with .at()..." << std::endl;
        std::cout << test.at(5) << std::endl;  // This will throw!
    } catch (const std::out_of_range& e) {
        std::cout << "ERROR CAUGHT: Out of bounds access!" << std::endl;
        std::cout << "Exception message: " << e.what() << std::endl;
    }
    
    // Unsafe access with [] - no bounds checking (could crash!)
    std::cout << "Using unsafe [] access on index 1: " << test[1] << std::endl;
    std::cout << "test[1000] with [] (dangerous, may crash): ";
    // Uncommenting below could crash:
    // std::cout << test[1000] << std::endl;
    std::cout << "(skipped for safety)" << std::endl;

    return 0;
}

// ============================================================
// EXERCISES - BEGINNER
// ============================================================
// 1. Create a vector of 5 favorite numbers. Print their sum,
//    product, and average in one go.
//
// 2. Ask the user to enter numbers until they type -1 (sentinel).
//    Store all numbers in a vector (except -1), then print them
//    in reverse order.
//
// 3. Create a vector by asking user for 10 integers. Find and
//    print: minimum, maximum, and median (middle value when sorted).
//
// 4. Given a vector of strings, find the longest string and print
//    its length and content.
//
// ============================================================
// EXERCISES - INTERMEDIATE
// ============================================================
// 5. Write a function bool removeValue(std::vector<int>& v, int val)
//    that removes the first occurrence of val from the vector and
//    returns true if found, false otherwise.
//
// 6. Write a function std::vector<int> filterAbove(const std::vector<int>& v,
//    int threshold) that returns a NEW vector containing only elements
//    > threshold. Keep the original unchanged.
//
// 7. Load 1,000,000 random numbers into a vector. Find the number
//    that appears at position size()/2 (middle). Time the operation.
//
// ============================================================
// EXERCISES - ADVANCED / EXTREME CASES
// ============================================================
// 8. EXTREME: Create a vector with 10 million elements. Implement
//    safe access with bounds checking. Try accessing valid and invalid
//    indices - catch exceptions. Print memory estimate.
//
// 9. Challenge: Given a vector of integers, remove all duplicates
//    while preserving order. Do this WITHOUT using extra space by
//    modifying in-place (use erase carefully).
//
// 10. EXTREME EDGE CASE: What happens if you try to sort an already-
//     sorted vector of 100 million elements? What about reverse order?
//     Measure and compare performance.
//
// 11. Create a "frequency counter" - read words into a vector<string>
//     and count how many times each appears. Handle empty input gracefully.
//
// 12. Given two sorted vectors, merge them into one sorted vector without
//     using std::sort. Can you do it in O(n) time?
//
// 13. EXTREME EDGE CASE: Create an empty vector, do various operations
//     on it safely: check size, check if empty, try to access with .at(),
//     try with [], add one element, remove it, verify empty again.
// ============================================================
