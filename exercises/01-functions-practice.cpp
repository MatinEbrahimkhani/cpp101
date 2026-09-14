/*
    Tamrin-haye emrooz: kar ba tabe-ha (Functions)
    ==========================================

    Ye tabe (function) ye tikke code-e jodast ke ye kar-e
    moshakhas anjam mide. Sakhtaresh injorie:

        noe-khoroji name-tabe(parametr-ha) {
            // code
            return meghdar;
        }

    Mesal:
        int doubleIt(int x) {
            return x * 2;
        }

    - "int" aval yani in tabe ye adad-e sahih bar migardoone
    - "doubleIt" esm-e tabe ast
    - "(int x)" yani ye voroodi (parameter) az noe int migire be esm-e x
    - "return x * 2;" yani khorooji-ye tabe, do barabar-e x ast

    Tooye main() injori sedash mizanim:
        int result = doubleIt(5);   // result mishe 10

    Baraye har soal-e zir, emzaye tabe (function signature) ro neveshtam,
    faghat bayad dakhelesh ro kamel koni. Har ja neveshte
    "code khodeto inja benevis" yani oonja kar-e to-e. Be main()
    paeen-e file dast nazan.
*/

#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------------------
// Soal 1: sal-e kabise (leap year)
// Ye sal migire va bayad true ya false bargardoone.
// (bool yani khorooji faghat yeki az in do-tast: true ya false)
//
// Ghanoon: age sal bar 4 bakhsh-pazir bashe kabise ast,
//   magar inke sal-e gharn bashe (yani bar 100 ham bakhsh-pazir,
//   mesle 1900) ke oon moghe faghat age bar 400 ham bakhsh-pazir
//   bashe kabise ast (mesle 2000).
//
// Nokte: baghimande-ye taghsim ro ba % be dast miyari, mesle year % 4
//   age baghimande sefr beshe yani bakhsh-pazire.
// Az && (va), || (ya) va ! (na) baraye tarkib-e shart-ha estefade kon.
// -----------------------------------------------------------
bool isLeapYear([[maybe_unused]] int year) {
    // code khodeto inja benevis
    // nokte: [[maybe_unused]] faghat baraye in ast ke ta ghabl az hal,
    // compiler warning nade. Vaghti hal kardi mituni pakesh koni.
    return false;  // javab-e placeholder — in ro dorost kon
}


// -----------------------------------------------------------
// Soal 2: bozorgtarin adad (find largest)
// Se ta adad migire, bayad bozorgtarineshoon ro bargardoone.
//
// Nokte: ba chand ta if posht-e sar-e ham (ya else-if) se ta ro
// ba ham moghayese kon.
// -----------------------------------------------------------
int findLargest([[maybe_unused]] int a, [[maybe_unused]] int b, [[maybe_unused]] int c) {
    // code khodeto inja benevis
    return a;  // placeholder — in ro dorost kon
}


// -----------------------------------------------------------
// Soal 3: sang, kaghaz, gheychi (rock-paper-scissors)
// Entekhab-e user ro be sorat-e string migire, mesle "sang",
// "kaghaz" ya "gheychi" ("rock"/"paper"/"scissors" ham ghabool ast).
// Entekhab-e computer hamishe sabete: "kaghaz" (paper).
// Bayad yeki az in se ta ro bargardooni:
//   "To bordi!" ya "Computer bord!" ya "Mosavi shod!"
//
// Nokte: baraye moghayese-ye do ta string az == estefade kon:
//   if (userChoice == "sang")
// -----------------------------------------------------------
string playRPS([[maybe_unused]] string userChoice) {
    string computerChoice = "kaghaz";
    // code khodeto inja benevis
    return "Hal nasode!";  // placeholder — in ro dorost kon
}


// -----------------------------------------------------------
// Soal 4 (chalesh): mohasebe-ye BMI
// Vazn (kilogram) va ghad (meter) migire, BMI ro hesab mikone
// va daste-bandish ro bar migardoone.
// Formula: BMI = vazn / (ghad * ghad)
// Daste-bandi:
//   kamtar az 18.5 -> "Kam-vazn"
//   18.5 ta 24.9   -> "Normal"
//   25 ta 29.9     -> "Ezafe-vazn"
//   30 be bala     -> "Chagh"
//
// Nokte: chon ghad va vazn adad-e ashari hastan, be jaye int
// az double estefade kon.
// -----------------------------------------------------------
string calculateBMI([[maybe_unused]] double weightKg, [[maybe_unused]] double heightM) {
    // code khodeto inja benevis
    return "Hal nasode!";  // placeholder — in ro dorost kon
}


// -----------------------------------------------------------
// Az inja be paeen dast nazan — in main() az tabe-haye bala
// estefade mikone.
// -----------------------------------------------------------
int main() {
    // Soal 1
    int year;
    cout << "Yek sal vared kon: ";
    cin >> year;
    if (isLeapYear(year))
        cout << year << " kabise ast." << endl;
    else
        cout << year << " kabise nist." << endl;

    cout << endl;

    // Soal 2
    int a, b, c;
    cout << "Se ta adad vared kon: ";
    cin >> a >> b >> c;
    cout << "Bozorgtarin adad: " << findLargest(a, b, c) << endl;

    cout << endl;

    // Soal 3
    string choice;
    cout << "Yeki ra entekhab kon (sang/kaghaz/gheychi): ";
    cin >> choice;
    cout << playRPS(choice) << endl;

    cout << endl;

    // Soal 4
    double height, weight;
    cout << "Ghad ro be meter vared kon (mesle 1.75): ";
    cin >> height;
    cout << "Vazn ro be kilogram vared kon: ";
    cin >> weight;
    cout << "BMI: " << calculateBMI(weight, height) << endl;

    return 0;
}
