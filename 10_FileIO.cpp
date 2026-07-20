#include <iostream>
#include <fstream>
int main() {
    std::ofstream file("data.txt");
    file << 123 << " " << 4.56;
    file.close();
    std::cout << "Data written to data.txt" << std::endl;
    return 0;
}
