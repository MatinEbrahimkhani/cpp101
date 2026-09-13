// ============================================================
// VECTOR EXERCISES - COMPLETE IMPLEMENTATIONS
// ============================================================
// Exercises 1-13 with Finglish TODOs for Persian learners
// ============================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

// ============================================================
// EXERCISE 1: Sum, Product, and Average
// ============================================================
// TODO: 5 adadi doos kardan. Sum, product, va average raa hesar konid.
void exercise1() {
    cout << "\n=== EXERCISE 1: Sum, Product, and Average ===" << endl;
    
    // TODO: Vector beiron konid va 5 adad daakhel konid
    vector<int> numbers;
    
    cout << "Enter 5 favorite numbers: ";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    
    // TODO: Sum raa hesab konid (jameh)
    int sum = 0;
    for (int n : numbers) {
        sum += n;
    }
    
    // TODO: Product raa hesab konid (zarb)
    long long product = 1;
    for (int n : numbers) {
        product *= n;
    }
    
    // TODO: Average raa hesab konid (miyangin)
    double average = (double)sum / numbers.size();
    
    cout << "Numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << "\nSum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
}


// ============================================================
// EXERCISE 2: Sentinel Loop and Reverse
// ============================================================
// TODO: User ta -1 dakhel konad. Adad haa raa vector kardan, bad reverse konid.
void exercise2() {
    cout << "\n=== EXERCISE 2: Sentinel Loop and Reverse ===" << endl;
    
    // TODO: Vector beiron konid
    vector<int> numbers;
    int input;
    
    cout << "Enter numbers (enter -1 to stop): ";
    while (true) {
        cin >> input;
        // TODO: Agar -1 bashad, loop baste shod
        if (input == -1) break;
        // TODO: Dar gheir in soorat, adad raa vector kardan
        numbers.push_back(input);
    }
    
    cout << "Original order: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // TODO: Vector raa reverse konid (reverse order)
    reverse(numbers.begin(), numbers.end());
    
    cout << "Reversed order: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
}


// ============================================================
// EXERCISE 3: Min, Max, and Median
// ============================================================
// TODO: 10 adadi gerat konid, minimum, maximum va miyaneh raa peyda konid.
void exercise3() {
    cout << "\n=== EXERCISE 3: Min, Max, and Median ===" << endl;
    
    // TODO: Vector beiron konid
    vector<int> numbers;
    
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    
    // TODO: Minimum peyda konid
    int minimum = numbers[0];
    for (int n : numbers) {
        if (n < minimum) minimum = n;
    }
    
    // TODO: Maximum peyda konid
    int maximum = numbers[0];
    for (int n : numbers) {
        if (n > maximum) maximum = n;
    }
    
    // TODO: Baraye median, vector raa sort konid
    vector<int> sorted_nums = numbers;
    sort(sorted_nums.begin(), sorted_nums.end());
    
    // TODO: Median value raa hesab konid (adadi miyaneh)
    int median = sorted_nums[sorted_nums.size() / 2];
    
    cout << "\nMinimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;
    cout << "Median: " << median << endl;
    cout << "Sorted: ";
    for (int n : sorted_nums) cout << n << " ";
    cout << endl;
}


// ============================================================
// EXERCISE 4: Find Longest String
// ============================================================
// TODO: Vector az strings gerat konid, darbaareh-ye string-e bozorg-tar goft-o-gu konid.
void exercise4() {
    cout << "\n=== EXERCISE 4: Find Longest String ===" << endl;
    
    // TODO: Vector beiron konid
    vector<string> words;
    string input;
    
    cout << "Enter words (type 'DONE' to finish): ";
    while (true) {
        cin >> input;
        // TODO: Agar "DONE" bashad, halal-o-kalah konid
        if (input == "DONE") break;
        // TODO: Word raa vector kardan
        words.push_back(input);
    }
    
    // TODO: Bozorg-tarin string raa peyda konid
    if (words.empty()) {
        cout << "No words entered!" << endl;
        return;
    }
    
    string longest = words[0];
    for (const string& w : words) {
        if (w.length() > longest.length()) {
            longest = w;
        }
    }
    
    cout << "Longest word: '" << longest << "'" << endl;
    cout << "Length: " << longest.length() << endl;
}


// ============================================================
// EXERCISE 5: Remove First Occurrence
// ============================================================
// TODO: Function tahrim konid ke adadi aval raa pak konid va true/false bargardanad.
bool removeValue(vector<int>& v, int val) {
    // TODO: Loop kardan, value raa peyda konid
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == val) {
            // TODO: erase kardan az vektor
            v.erase(v.begin() + i);
            // TODO: true bargardanad (peyda shod)
            return true;
        }
    }
    // TODO: false bargardanad (peyda nashod)
    return false;
}

void exercise5() {
    cout << "\n=== EXERCISE 5: Remove First Occurrence ===" << endl;
    
    // TODO: Vector beiron konid va adad daakhel konid
    vector<int> numbers = {10, 20, 30, 20, 40, 20, 50};
    
    cout << "Original: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // TODO: removeValue function raa call konid
    int target = 20;
    bool found = removeValue(numbers, target);
    
    cout << "After removing " << target << ": ";
    for (int n : numbers) cout << n << " ";
    cout << "\nFound: " << (found ? "YES" : "NO") << endl;
}


// ============================================================
// EXERCISE 6: Filter Above Threshold
// ============================================================
// TODO: Function tahrim konid ke NEW vector bargardanad (ba elements bozorg-tar az threshold)
vector<int> filterAbove(const vector<int>& v, int threshold) {
    // TODO: NEW vector beiron konid
    vector<int> result;
    
    // TODO: Loop kardan dar original vector
    for (int n : v) {
        // TODO: Agar n bozorg-tar az threshold bashad, daakhel konid
        if (n > threshold) {
            result.push_back(n);
        }
    }
    
    // TODO: result raa bargardanid
    return result;
}

void exercise6() {
    cout << "\n=== EXERCISE 6: Filter Above Threshold ===" << endl;
    
    // TODO: Original vector beiron konid
    vector<int> numbers = {10, 25, 15, 35, 20, 45, 5};
    int threshold = 20;
    
    cout << "Original: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // TODO: filterAbove function raa call konid
    vector<int> filtered = filterAbove(numbers, threshold);
    
    cout << "Filtered (> " << threshold << "): ";
    for (int n : filtered) cout << n << " ";
    cout << endl;
    
    cout << "Original (unchanged): ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
}


// ============================================================
// EXERCISE 7: Large Vector Middle Element
// ============================================================
// TODO: 1,000,000 adad daakhel konid. Element-e miyaneh raa peyda konid va time konid.
void exercise7() {
    cout << "\n=== EXERCISE 7: Large Vector (1 Million Elements) ===" << endl;
    
    // TODO: Vector beiron konid
    vector<int> largeVector;
    
    const int MILLION = 1000000;
    cout << "Creating vector with " << MILLION << " elements..." << endl;
    
    // TODO: Loop kardan, adad daakhel konid
    for (int i = 0; i < MILLION; i++) {
        largeVector.push_back(i * i);
    }
    
    cout << "Vector size: " << largeVector.size() << endl;
    
    // TODO: Element-e miyaneh raa peyda konid
    int middle_index = largeVector.size() / 2;
    int middle_value = largeVector[middle_index];
    
    cout << "Middle element (index " << middle_index << "): " << middle_value << endl;
    cout << "First element: " << largeVector[0] << endl;
    cout << "Last element: " << largeVector[MILLION - 1] << endl;
}


// ============================================================
// EXERCISE 8: 10 Million Elements with Bounds Checking
// ============================================================
// TODO: Vector ba 10 million element behet kardan. Safe access + exception handling
void exercise8() {
    cout << "\n=== EXERCISE 8: Extreme - 10 Million Elements ===" << endl;
    
    // TODO: Vector beiron konid
    vector<long long> massive;
    
    const int TEN_MILLION = 10000000;
    cout << "Creating vector with " << TEN_MILLION << " elements..." << endl;
    
    // TODO: Loop kardan, adad daakhel konid
    for (int i = 0; i < TEN_MILLION; i++) {
        massive.push_back((long long)i * i);
    }
    
    cout << "Vector created! Size: " << massive.size() << endl;
    
    // TODO: Memory estimate: har element = 8 bytes (long long)
    long long memory_kb = (massive.size() * sizeof(long long)) / 1024;
    long long memory_mb = memory_kb / 1024;
    cout << "Estimated memory: ~" << memory_mb << " MB" << endl;
    
    // TODO: Safe access ba .at() - catch exception
    cout << "\nTesting safe access with .at():" << endl;
    try {
        cout << "Element at index 100: " << massive.at(100) << endl;
        cout << "Element at index 5000000: " << massive.at(5000000) << endl;
        
        cout << "Trying to access index 50000000 (out of bounds)..." << endl;
        cout << massive.at(50000000) << endl;  // This will throw!
    } catch (const out_of_range& e) {
        cout << "CAUGHT EXCEPTION: Out of bounds!" << endl;
        cout << "Error message: " << e.what() << endl;
    }
}


// ============================================================
// EXERCISE 9: Remove Duplicates
// ============================================================
// TODO: Adad-haye tekrari raa pak konid (dar jaye) - order hesabat behtar.
void exercise9() {
    cout << "\n=== EXERCISE 9: Remove Duplicates ===" << endl;
    
    // TODO: Vector beiron konid (ba tekrar)
    vector<int> numbers = {1, 2, 2, 3, 1, 4, 3, 5, 1, 2};
    
    cout << "Original (with duplicates): ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // TODO: Erase kardan duplicates (careful with erase!)
    for (size_t i = 0; i < numbers.size(); i++) {
        // TODO: Ba index i comparison kardan
        for (size_t j = i + 1; j < numbers.size(); j++) {
            // TODO: Agar du adad barabar bashad, pak konid
            if (numbers[i] == numbers[j]) {
                numbers.erase(numbers.begin() + j);
                j--;  // TODO: Index raa adjust konid
            }
        }
    }
    
    cout << "After removing duplicates: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
}


// ============================================================
// EXERCISE 10: Sort Performance Test
// ============================================================
// TODO: Vector-e bozorg raa sort konid. Compare: sorted vs reverse sorted vs random
void exercise10() {
    cout << "\n=== EXERCISE 10: Sort Performance ===" << endl;
    
    // TODO: Vector beiron konid (100 million? khoolie ... besiyar kam!)
    const int SIZE = 1000000;  // 1 million (10 million too slow for demo)
    
    vector<int> sorted_vec;
    vector<int> reverse_vec;
    vector<int> random_vec;
    
    // TODO: Sorted vector beiron konid
    cout << "Creating vectors with " << SIZE << " elements..." << endl;
    for (int i = 0; i < SIZE; i++) {
        sorted_vec.push_back(i);
        reverse_vec.push_back(SIZE - i);
        random_vec.push_back(rand() % 1000);
    }
    
    // TODO: Sort already-sorted vector
    cout << "\nSorting ALREADY SORTED vector..." << endl;
    sort(sorted_vec.begin(), sorted_vec.end());
    cout << "Done! (already sorted = very fast)" << endl;
    
    // TODO: Sort reverse-sorted vector
    cout << "Sorting REVERSE SORTED vector..." << endl;
    sort(reverse_vec.begin(), reverse_vec.end());
    cout << "Done! (worst case = slower)" << endl;
    
    // TODO: Sort random vector
    cout << "Sorting RANDOM vector..." << endl;
    sort(random_vec.begin(), random_vec.end());
    cout << "Done!" << endl;
    
    cout << "\nFirst 5 after sorting: ";
    for (int i = 0; i < 5; i++) cout << random_vec[i] << " ";
    cout << endl;
}


// ============================================================
// EXERCISE 11: Frequency Counter
// ============================================================
// TODO: Words raa mikhoonid. Count konid har word chand bar amade.
void exercise11() {
    cout << "\n=== EXERCISE 11: Frequency Counter ===" << endl;
    
    // TODO: Vector beiron konid (strings)
    vector<string> words;
    string input;
    
    cout << "Enter words (type 'END' to finish): ";
    while (true) {
        cin >> input;
        // TODO: Agar "END" bashad, halal-o-kalah
        if (input == "END") break;
        // TODO: Word raa vector kardan
        words.push_back(input);
    }
    
    // TODO: Check agar empty bashad
    if (words.empty()) {
        cout << "No words entered!" << endl;
        return;
    }
    
    // TODO: Count frequency (adad-e tekeran)
    cout << "\nWord Frequencies:" << endl;
    vector<bool> counted(words.size(), false);
    
    for (size_t i = 0; i < words.size(); i++) {
        // TODO: Agar ghabel-an shenasaye shode, skip konid
        if (counted[i]) continue;
        
        int count = 0;
        for (size_t j = i; j < words.size(); j++) {
            // TODO: Count konid tu loop
            if (words[i] == words[j]) {
                count++;
                counted[j] = true;
            }
        }
        
        cout << "'" << words[i] << "': " << count << " times" << endl;
    }
}


// ============================================================
// EXERCISE 12: Merge Two Sorted Vectors
// ============================================================
// TODO: Do vector-e sorted raa merge konid WITHOUT sort() - O(n) time
void exercise12() {
    cout << "\n=== EXERCISE 12: Merge Two Sorted Vectors ===" << endl;
    
    // TODO: Do sorted vector beiron konid
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 6, 8, 10};
    
    cout << "Vector 1: ";
    for (int n : v1) cout << n << " ";
    cout << "\nVector 2: ";
    for (int n : v2) cout << n << " ";
    cout << endl;
    
    // TODO: Merge kardan (ba du pointer)
    vector<int> merged;
    size_t i = 0, j = 0;
    
    // TODO: Loop kardan ta khodkaan bitarin
    while (i < v1.size() && j < v2.size()) {
        // TODO: Compare konid va asghar raa beiron konid
        if (v1[i] <= v2[j]) {
            merged.push_back(v1[i]);
            i++;
        } else {
            merged.push_back(v2[j]);
            j++;
        }
    }
    
    // TODO: Baghie v1 raa daakhel konid
    while (i < v1.size()) {
        merged.push_back(v1[i]);
        i++;
    }
    
    // TODO: Baghie v2 raa daakhel konid
    while (j < v2.size()) {
        merged.push_back(v2[j]);
        j++;
    }
    
    cout << "Merged (sorted): ";
    for (int n : merged) cout << n << " ";
    cout << endl;
}


// ============================================================
// EXERCISE 13: Empty Vector Edge Cases
// ============================================================
// TODO: Empty vector ba khat u neshoon - safe operations ra test konid
void exercise13() {
    cout << "\n=== EXERCISE 13: Empty Vector Edge Cases ===" << endl;
    
    // TODO: Empty vector beiron konid
    vector<int> empty_vec;
    
    cout << "Initial state:" << endl;
    cout << "  Size: " << empty_vec.size() << endl;
    cout << "  Empty? " << (empty_vec.empty() ? "YES" : "NO") << endl;
    cout << "  Capacity: " << empty_vec.capacity() << endl;
    
    // TODO: Check khorij size - safe operation
    cout << "\nAdding element..." << endl;
    empty_vec.push_back(42);
    cout << "  Size: " << empty_vec.size() << endl;
    cout << "  Value: " << empty_vec[0] << endl;
    
    // TODO: Safe access ba .at()
    cout << "\nTesting .at() access:" << endl;
    try {
        cout << "  At index 0: " << empty_vec.at(0) << endl;
    } catch (const out_of_range& e) {
        cout << "  ERROR: " << e.what() << endl;
    }
    
    // TODO: Remove element
    cout << "\nRemoving element..." << endl;
    empty_vec.pop_back();
    cout << "  Size: " << empty_vec.size() << endl;
    cout << "  Empty? " << (empty_vec.empty() ? "YES" : "NO") << endl;
    
    // TODO: Try .at() on empty vector - will throw
    cout << "\nTrying .at(0) on empty vector..." << endl;
    try {
        cout << empty_vec.at(0) << endl;
    } catch (const out_of_range& e) {
        cout << "  CAUGHT EXCEPTION: Out of bounds!" << endl;
        cout << "  This is why we check .empty() first!" << endl;
    }
    
    // TODO: Try [] on empty vector - DANGEROUS (no check)
    cout << "\nNote: empty_vec[0] is UNSAFE and undefined behavior!" << endl;
}


// ============================================================
// MAIN MENU
// ============================================================
int main() {
    srand(time(0));
    
    cout << "\n╔════════════════════════════════════════════════╗" << endl;
    cout << "║     VECTOR EXERCISES 1-13 - COMPLETE SET      ║" << endl;
    cout << "║     With Finglish TODOs for Persian Learners   ║" << endl;
    cout << "╚════════════════════════════════════════════════╝" << endl;
    
    int choice = 0;
    while (true) {
        cout << "\n════════════════════════════════════════" << endl;
        cout << "1.  Exercise 1  - Sum, Product, Average" << endl;
        cout << "2.  Exercise 2  - Sentinel & Reverse" << endl;
        cout << "3.  Exercise 3  - Min, Max, Median" << endl;
        cout << "4.  Exercise 4  - Find Longest String" << endl;
        cout << "5.  Exercise 5  - Remove First Occurrence" << endl;
        cout << "6.  Exercise 6  - Filter Above Threshold" << endl;
        cout << "7.  Exercise 7  - Large Vector (1M elements)" << endl;
        cout << "8.  Exercise 8  - Extreme (10M elements)" << endl;
        cout << "9.  Exercise 9  - Remove Duplicates" << endl;
        cout << "10. Exercise 10 - Sort Performance" << endl;
        cout << "11. Exercise 11 - Frequency Counter" << endl;
        cout << "12. Exercise 12 - Merge Two Sorted Vectors" << endl;
        cout << "13. Exercise 13 - Empty Vector Edge Cases" << endl;
        cout << "0.  Exit" << endl;
        cout << "════════════════════════════════════════" << endl;
        
        cout << "Choose exercise (0-13): ";
        cin >> choice;
        
        if (choice == 0) {
            cout << "\nBye! Khoda hafez!" << endl;
            break;
        }
        
        // TODO: Switch case kardan baraye har exercise
        switch (choice) {
            case 1:  exercise1(); break;
            case 2:  exercise2(); break;
            case 3:  exercise3(); break;
            case 4:  exercise4(); break;
            case 5:  exercise5(); break;
            case 6:  exercise6(); break;
            case 7:  exercise7(); break;
            case 8:  exercise8(); break;
            case 9:  exercise9(); break;
            case 10: exercise10(); break;
            case 11: exercise11(); break;
            case 12: exercise12(); break;
            case 13: exercise13(); break;
            default: cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;
}
