#include <iostream>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) sum += i;
    std::cout << "Sum 1+...+10 = " << sum << std::endl;
    return 0;
}
