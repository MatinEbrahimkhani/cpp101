#include <iostream>
int square(int x) {
    return x * x;
}
int main() {
    int num = 4;
    std::cout << "Square of " << num << " is " << square(num) << std::endl;
    return 0;
}
