// ============================================================
// Lesson 07: Vectors - Complete Guide
// ============================================================
// A vector is a DYNAMIC ARRAY - it grows and shrinks as
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
#include <algorithm>  // for sort, reverse, etc
using namespace std;
int main() {
    // ========== EXAMPLE 1: Creating and Iterating ==========
    cout << "=== EXAMPLE 1: Creating and Iterating ===" << endl;
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // Method 1: Range-based for loop (modern, preferred)
    cout << "Range-based for: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    
    // Method 2: Traditional index-based loop
    cout << "Index-based for: ";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    // Method 3: Iterator-based loop (powerful for algorithms)
    cout << "Iterator-based for: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n" << endl;


    // ========== EXAMPLE 2: Dynamic Growth with push_back ==========
    cout << "=== EXAMPLE 2: Dynamic Growth ===" << endl;
    vector<string> friends;
    cout << "Starting size: " << friends.size() << " (capacity: " 
              << friends.capacity() << ")" << endl;
    
    friends.push_back("Amirreza");
    friends.push_back("Sadra");
    friends.push_back("Mina");
    friends.push_back("Hassan");
    
    cout << "After adding 4 friends - size: " << friends.size() 
              << " (capacity: " << friends.capacity() << ")" << endl;
    cout << "Friends list:" << endl;
    for (size_t i = 0; i < friends.size(); i++) {
        cout << "  [" << i << "] " << friends[i] << endl;
    }
    cout << endl;


    // ========== EXAMPLE 3: Vector Statistics ==========
    cout << "=== EXAMPLE 3: Vector Statistics ===" << endl;
    vector<int> scores = {85, 92, 78, 95, 60};
    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];
    
    for (int s : scores) {
        sum += s;
        if (s > highest) highest = s;
        if (s < lowest) lowest = s;
    }
    double average = (double)sum / scores.size();
    
    cout << "Scores: ";
    for (int s : scores) cout << s << " ";
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl << endl;


    // ========== EXAMPLE 4: Removing Items & Edge Cases ==========
    cout << "=== EXAMPLE 4: Removing Items & Edge Cases ===" << endl;
    vector<int> data = {10, 20, 30, 40, 50};
    cout << "Original: ";
    for (int x : data) cout << x << " ";
    cout << endl;
    
    // Remove last element with pop_back
    data.pop_back();
    cout << "After pop_back(): ";
    for (int x : data) cout << x << " ";
    cout << " (size: " << data.size() << ")" << endl;
    
    // Remove element at specific index using erase
    data.erase(data.begin() + 1);  // Remove index 1 (value 20)
    cout << "After erase index 1: ";
    for (int x : data) cout << x << " ";
    cout << " (size: " << data.size() << ")" << endl;
    
    // Clear entire vector
    vector<int> temp = {1, 2, 3};
    cout << "Before clear: size = " << temp.size() << endl;
    temp.clear();
    cout << "After clear: size = " << temp.size() 
              << " (empty? " << (temp.empty() ? "YES" : "NO") << ")" << endl << endl;


    // ========== EXAMPLE 5: Extreme Case - Very Large Vector ==========
    cout << "=== EXAMPLE 5: Extreme Case - Very Large Vector ===" << endl;
    vector<long long> massive;
    const int MILLION = 1000000;
    
    cout << "Creating vector with " << MILLION << " elements..." << endl;
    for (int i = 0; i < MILLION; i++) {
        massive.push_back(i * i);
    }
    
    cout << "Vector size: " << massive.size() << endl;
    cout << "First 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cout << massive[i] << " ";
    }
    cout << endl;
    cout << "Last 5 elements: ";
    for (int i = MILLION - 5; i < MILLION; i++) {
        cout << massive[i] << " ";
    }
    cout << endl;
    cout << "Element at middle: " << massive[MILLION / 2] << endl << endl;


    // ========== EXAMPLE 6: Empty Vector Edge Case ==========
    cout << "=== EXAMPLE 6: Empty Vector Edge Case ===" << endl;
    vector<double> empty_vec;
    
    cout << "Empty vector - size: " << empty_vec.size() << endl;
    cout << "Is empty? " << (empty_vec.empty() ? "YES" : "NO") << endl;
    
    // Safe way to check before accessing
    if (!empty_vec.empty()) {
        cout << "First element: " << empty_vec[0] << endl;
    } else {
        cout << "Cannot access - vector is empty!" << endl;
    }
    
    // Add element to empty vector
    empty_vec.push_back(3.14);
    cout << "After push_back: size = " << empty_vec.size() 
              << ", value = " << empty_vec[0] << endl << endl;


    // ========== EXAMPLE 7: Different Data Types ==========
    cout << "=== EXAMPLE 7: Different Data Types ===" << endl;
    
    // Vector of bools (special case - packs 8 bools per byte!)
    vector<bool> flags = {true, false, true, true, false};
    cout << "Boolean vector (size: " << flags.size() << "): ";
    for (bool f : flags) {
        cout << (f ? "T" : "F") << " ";
    }
    cout << endl;
    
    // Vector of doubles
    vector<double> decimals = {3.14, 2.71, 1.41, 1.73};
    double product = 1.0;
    for (double d : decimals) product *= d;
    cout << "Double vector product: " << product << endl;
    
    // Vector of chars (like a string, but more control)
    vector<char> chars = {'H', 'e', 'l', 'l', 'o'};
    cout << "Char vector: ";
    for (char c : chars) cout << c;
    cout << endl << endl;


    // ========== EXAMPLE 8: Insert in Middle & Sorting ==========
    cout << "=== EXAMPLE 8: Insert in Middle & Sorting ===" << endl;
    vector<int> numbers = {3, 1, 4, 1, 5};
    
    cout << "Original: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // Insert value 99 at position 2
    numbers.insert(numbers.begin() + 2, 99);
    cout << "After insert(99 at index 2): ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // Sort the vector
    sort(numbers.begin(), numbers.end());
    cout << "After sort: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // Reverse the vector
    reverse(numbers.begin(), numbers.end());
    cout << "After reverse: ";
    for (int n : numbers) cout << n << " ";
    cout << endl << endl;


    // ========== EXAMPLE 9: Extreme Case - Access Bounds ==========
    cout << "=== EXAMPLE 9: Extreme Case - Bounds Checking ===" << endl;
    vector<int> test = {10, 20, 30};
    
    cout << "Vector size: " << test.size() << endl;
    
    // Safe access with .at() - throws exception if out of bounds
    try {
        cout << "Accessing index 1: " << test.at(1) << endl;
        cout << "Trying to access index 5 with .at()..." << endl;
        cout << test.at(5) << endl;  // This will throw!
    } catch (const out_of_range& e) {
        cout << "ERROR CAUGHT: Out of bounds access!" << endl;
        cout << "Exception message: " << e.what() << endl;
    }
    
    // Unsafe access with [] - no bounds checking (could crash!)
    cout << "Using unsafe [] access on index 1: " << test[1] << endl;
    cout << "test[1000] with [] (dangerous, may crash): ";
    // Uncommenting below could crash:
    // cout << test[1000] << endl;
    cout << "(skipped for safety)" << endl;

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
// 5. Write a function bool removeValue(vector<int>& v, int val)
//    that removes the first occurrence of val from the vector and
//    returns true if found, false otherwise.
//
// 6. Write a function vector<int> filterAbove(const vector<int>& v,
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
//     using sort. Can you do it in O(n) time?
//
// 13. EXTREME EDGE CASE: Create an empty vector, do various operations
//     on it safely: check size, check if empty, try to access with .at(),
//     try with [], add one element, remove it, verify empty again.
// ============================================================
