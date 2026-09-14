// =========================================================
// Tamrin 202: Peyda kardan-e bozorgtarin adad (find largest)
// =========================================================
// Salam! Ba if/else se adad ro moghayese kon.
// Example: input 12 9 30 -> output 30.
// =========================================================

#include <iostream>

int findLargest(int a, int b, int c) {
    int biggest = a;
    if (b > biggest) biggest = b;
    if (c > biggest) biggest = c;
    return biggest;
}

int main() {
    std::cout << "Se adad vared kon (ba fasele): ";
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "Bozorgtarin: " << findLargest(a, b, c) << std::endl;
    return 0;
}
