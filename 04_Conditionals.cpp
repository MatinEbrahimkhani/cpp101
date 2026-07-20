#include <iostream>
int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    if (x > 0) {
        std::cout << "Positive" << std::endl;
    } else if (x == 0) {
        std::cout << "Zero" << std::endl;
    } else {
        std::cout << "Negative" << std::endl;
    }
    return 0;
}
