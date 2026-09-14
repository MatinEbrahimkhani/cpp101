// =========================================================
// Tamrin 203: Sang, Kaghaz, Gheychi (Rock, Paper, Scissors)
// =========================================================
// Salam! In tamrin yadet mide ke chetori ba string,
// if/else va function kar koni.
//
// Kar-hayi ke bayad bokoni:
//   1) Entekhab-e user ro be sorat-e string begir:
//      "sang" (rock), "kaghaz" (paper) ya "gheychi" (scissors).
//      ("rock"/"paper"/"scissors" ham ghabool ast.)
//   2) Entekhab-e computer hamishe "kaghaz" (paper) ast.
//   3) Ba if/else moshakhas kon ki bord:
//      - sang vs kaghaz -> computer bord
//      - kaghaz vs kaghaz -> mosavi
//      - gheychi vs kaghaz -> to bordi
//   4) Function bayad yeki az in string-ha ro bargardone:
//      "To bordi!" / "Computer bord!" / "Mosavi shod!"
//
// Nokte: moghayese-ye string ba == :
//   if (userChoice == "sang")
//
// Example:
//   user = "sang", computer = "kaghaz" -> "Computer bord!"
// =========================================================

#include <iostream>
#include <string>

std::string normalizeChoice(std::string s) {
    for (char& c : s) c = (char)tolower(c);
    if (s == "rock") return "sang";
    if (s == "paper") return "kaghaz";
    if (s == "scissors" || s == "scissor") return "gheychi";
    return s;
}

std::string playRPS(std::string userChoice) {
    std::string computerChoice = "kaghaz";  // paper, sabet
    userChoice = normalizeChoice(userChoice);

    if (userChoice == computerChoice) {
        return "Mosavi shod!";
    }
    if (userChoice == "sang") {      // sang vs kaghaz -> computer
        return "Computer bord!";
    }
    if (userChoice == "gheychi") {   // gheychi vs kaghaz -> user
        return "To bordi!";
    }
    if (userChoice == "kaghaz") {    // kaghaz vs kaghaz -> mosavi (already handled)
        return "Mosavi shod!";
    }
    return "Voroodi namotabar! (sang / kaghaz / gheychi)";
}

int main() {
    std::cout << "Yeki ra entekhab kon (sang/kaghaz/gheychi): ";
    std::string choice;
    std::cin >> choice;
    std::cout << playRPS(choice) << std::endl;
    return 0;
}
