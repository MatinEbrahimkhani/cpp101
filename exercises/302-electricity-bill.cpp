// =========================================================
// Tamrin 302: Mohasebe-ye hazine-ye bargh (electricity bill)
// =========================================================
// Barname hazine-ye bargh ra bar asas-e masraf (kWh) mohasebe mikone.
//
// Ghavanin (pelekani):
//   masraf < 0               -> "Invalid consumption"
//   masraf <= 100            -> hazine = masraf * 5
//   100 < masraf <= 300      -> hazine = 100*5 + (masraf-100)*8
//   masraf > 300             -> hazine = 100*5 + 200*8 + (masraf-300)*12
//   hazine > 2000            -> payam-e "High electricity bill" ham chap kon.
//
// Nokte: chon if-e aval "manfi" ro migire, baghie ba else-if
// zanjir mishan ta faghat YEK shart ejra she.
// Example: 350 -> Bill: 2700 + "High electricity bill"
//   (500 + 1600 + 600 = 2700)
// =========================================================

#include <iostream>

double calcBill(double masraf) {
    if (masraf <= 100) return masraf * 5;
    if (masraf <= 300) return 100 * 5 + (masraf - 100) * 8;
    return 100 * 5 + 200 * 8 + (masraf - 300) * 12;
}

int main() {
    double masraf = 0.0;
    std::cout << "Masraf-e bargh (kWh): ";
    std::cin >> masraf;

    if (masraf < 0) {
        std::cout << "Invalid consumption" << std::endl;
        return 0;
    }

    double bill = calcBill(masraf);
    std::cout << "Bill: " << bill << std::endl;
    if (bill > 2000) {
        std::cout << "High electricity bill" << std::endl;
    }
    return 0;
}
