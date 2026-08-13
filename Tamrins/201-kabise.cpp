/*
  =========================================================
  Tamrin 201: Kabise ya Nabudane sal kabise
  =========================================================

  Salam! in tamrin baraye ine ke chetori ba if/else
  yek sal ra bebin kabise ast ya na.

  Chizayi ke bayad bokoni:
  1) Yek sal be function bede.
  2) Barresi kon ke sal kabise ast ya na.
  3) Agar kabise bod, true return kon; age nabod, false return kon.
  4) Dar main(), sal ra begir va natije ra namayesh bede.

  Rule:
  - Agar sal ba 4 baghimandeh 0 bashad, kabise ast.
  - Agar sal ba 100 baghimandeh 0 bashad, kabise nist.
  - Agar sal ba 400 baghimandeh 0 bashad, dobare kabise ast.

  Nokat:
  - Az if/else estefade kon.
  - Baraye check kardan baghimandegi, % estefade kon.
  - Adad ha int hastand.

  Example:
    input: 2024
    output: true

    input: 1900
    output: false

  Yadet bashe: TODO ra por kon va logic ra dorost benvis!
  =========================================================
*/

#include <iostream>

int leapyear(int year) {
    if(year % 4 == 0 || year % 100 == 0 || year % 400 == 0) {
        return true; // you can set 1;
    }
else 
    return false; // you can set 0;
}



int main(){
    int year;
    std::cout << "Enter a number: ";
    std::cin >> year;
    std::cout << leapyear(year) << std::endl;


    return 0;

}