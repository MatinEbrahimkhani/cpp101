// ------------------------------------------------------------
// Tamrin 102: Dayere (circle)
// ============================================================
// Shoaa (radius) = 4. Mabhas: mohit (circumference) va masahat (area).
//   ghotr  (diameter) = shoaa * 2
//   mohit  = ghotr * pi      (yani 2 * pi * shoaa)
//   masahat = shoaa * shoaa * pi
// Nokte: pi = 3 daghigh nist! Ba 3.14159 behtarin ghaziri-e.
// Baraye tamrin: ghabl az run, output ro ba dast hesab kon
// (ba pi=3) va ba'd ba pi=3.14159 moghayese kon.
// ============================================================

#include <iostream>

int main() {
    double shoaa = 4;
    double pi = 3.14159;
    double ghotr = shoaa * 2;
    double mohit = ghotr * pi;
    double masahat = shoaa * shoaa * pi;

    std::cout << "shoaa  = " << shoaa << std::endl;
    std::cout << "ghotr  = " << ghotr << std::endl;
    std::cout << "mohit  = " << mohit << std::endl;
    std::cout << "masahat = " << masahat << std::endl;
    return 0;
}
