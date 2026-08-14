/*
  =========================================================
  Tamrin 202: Peyda kardan bozorgtarin adad
  =========================================================

  Salam! in tamrin baraye ine  ke chetori ba if/else
  yeki az adad haye dade shode ro behtar moghayese koni.

  Chizayi ke bayad bokoni:
  1) Se adad be function bede.
  2) Az beyn anha bozorgtarin ro peyda kon.
  3) Adad bozorgtar ro return kon.
  4) Dar main(), adad ha ro begir va natije ro namayesh bede.

  Nokat:
  - Az if/else estefade kon.
  - Adad ha int hastand.
  - Hich adadi niaz be float ya double nist.

  Example:
    input: 12 ,9 ,30
    output: 30

  Yadet bashe: TODO ro por kon va function ro tamam kon!
  =========================================================
*/

#include <iostream>
using namespace std;
double findLargest(double a, double b, double c) {
  if (a >= b && a >= c){
     return a;
  }
  else if( b >= a &&  b >= c) {
    return b;
  }
  else if(c >= a && c >= b) {
    return c;
  }
  else {
    return 0;
  }
 // Kode khodeto inja benevis
    // TODO:

}

int main(){
    // Input ha ra begir
    // Natije ra chap kon
   // findLargest(5 , 6 , 7);
    cout << "findlargest"<< endl << "enter three numbers:";
    double a , b , c;
    cin  >> a >> b >> c;
    double largest =  findLargest(a,b,c);
    cout << "largest number is  "<< largest;
    return 0;
  

}