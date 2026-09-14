// =========================================================
// Tamrin 304: System-e login (username + password)
// =========================================================
// Username-e dorost: admin
// Password-e dorost: 1234
//
// Ghavanin:
//   1) Username ro az user begir.
//   2) Agar username "admin" nabood -> "Invalid username".
//   3) Agar dorost bood -> password ro begir.
//   4) Agar password 1234 bood -> "Login successful" +
//      "Welcome, administrator!" (nested-if).
//   5) Vagarna -> "Invalid password".
//
// Nokte: password ro FAGHAT vaghti begir ke username dorost bashe.
// (Hamin tartib, Jenkins-e amniat-e sade ast.)
//
// Example 1: admin / 1234 -> Login successful + Welcome
// Example 2: ali           -> Invalid username
// Example 3: admin / 9999  -> Invalid password
// =========================================================

#include <iostream>
#include <string>

int main() {
    const std::string USER_DOROST = "admin";
    const std::string PASS_DOROST = "1234";

    std::string username;
    std::cout << "Username: ";
    std::cin >> username;

    if (username != USER_DOROST) {
        std::cout << "Invalid username" << std::endl;
        return 0;
    }

    std::string password;
    std::cout << "Password: ";
    std::cin >> password;

    if (password != PASS_DOROST) {
        std::cout << "Invalid password" << std::endl;
        return 0;
    }

    std::cout << "Login successful" << std::endl;
    if (username == "admin") {  // nested-if: faghat admin in payam ro migire
        std::cout << "Welcome, administrator!" << std::endl;
    }
    return 0;
}
