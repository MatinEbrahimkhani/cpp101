// Intentional bug: division by zero
#include <iostream>
int main() {
    int x = 10, y = 0;
    int z = x / y; // debugger can help find this
    std::cout << z << std::endl;
    return 0;
}
