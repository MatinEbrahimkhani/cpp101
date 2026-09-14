// =========================================================
// Tamrin 303: Gheymat-e belit-e cinema (ticket price)
// =========================================================
// Ghavanin (gheymat-e asli 200):
//   sen < 5         -> 0 (rayegan)
//   5..12           -> 100, daneshjoo -> 80
//   13..59          -> 200, daneshjoo -> 150
//   sen >= 60       -> 120
// Voroodi-e daneshjoo: 1 = bale, 0 = na.
// Marz-ha ro ba <= dorost check kon.
// Example: 20,1 -> 150. 8,0 -> 100.
// =========================================================

#include <iostream>

int ticketPrice(int sen, int daneshjoo) {
    if (sen < 5) return 0;
    if (sen <= 12) return (daneshjoo == 1) ? 80 : 100;
    if (sen <= 59) return (daneshjoo == 1) ? 150 : 200;
    return 120;
}

int main() {
    int sen, daneshjoo;
    std::cout << "Sen ra vared kon: ";
    std::cin >> sen;
    std::cout << "Daneshjoo hasti? (1=bale, 0=na): ";
    std::cin >> daneshjoo;
    std::cout << "Gheymat-e belit: " << ticketPrice(sen, daneshjoo) << std::endl;
    return 0;
}
