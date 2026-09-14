// =========================================================
// Tamrin 201: Kabise — leap year (sal-e kabise)
// =========================================================
// Salam! In tamrin baraye ine ke ba if/else befahmi
// yek sal kabise ast ya na.
//
// Ghanoon (rule):
//   - Agar sal be 4 bakhsh-pazir bashe -> kabise ast.
//   - VALI agar sal-e gharn bashe (be 100 bakhsh-pazir,
//     mesle 1900) -> kabise NIST.
//   - MAGAR inke be 400 ham bakhsh-pazir bashe (mesle 2000)
//     -> dobare kabise ast.
//
// Nokte: baghimande ro ba % migiri: year % 4 == 0
// yani "be 4 bakhsh-pazir ast".
//
// Example: 2024 -> kabise. 1900 -> nist. 2000 -> kabise.
// =========================================================

#include <iostream>

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int year;
    std::cout << "Yek sal vared kon: ";
    std::cin >> year;
    if (isLeapYear(year)) {
        std::cout << year << " kabise ast." << std::endl;
    } else {
        std::cout << year << " kabise nist." << std::endl;
    }
    std::cout << "\nSelf-check: 2024=" << isLeapYear(2024)
              << " (1), 1900=" << isLeapYear(1900)
              << " (0), 2000=" << isLeapYear(2000)
              << " (1)" << std::endl;
    return 0;
}
