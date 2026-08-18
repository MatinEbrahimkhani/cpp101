/*
  =========================================================
  Tamrin 302: Mohasebe-ye Hazine-ye Bargh
  =========================================================

  Salam! in tamrin baraye in ast ke ba if, else if, else
  va nested if bishtar kar koni!

  Barname bayad hazine-ye bargh ra bar asas-e masraf
  mohasebe konad.

  Chizayi ke bayad bokoni:
  1) Masraf-e bargh ra az user begir. Masraf bar hasbe
     kWh dade mishavad.

  2) Agar masraf 100 kWh ya kamtar bood:
       hazine = masraf * 5

  3) Agar masraf bishtar az 100 va kamtar ya mosavi 300 bood:
       hazine = 100 * 5
               + (masraf - 100) * 8

  4) Agar masraf bishtar az 300 bood:
       hazine = 100 * 5
               + 200 * 8
               + (masraf - 300) * 12

  5) Agar masraf manfi bood:
       "Invalid consumption" chap kon.

  6) Agar hazine bishtar az 2000 bood, yek payam-e
     "High electricity bill" ham chap kon.

  Nokat:
  - Baraye tasmim giri az if / else if / else estefade kon.
  - Baraye check kardan-e hazine mitavani az nested if
    estefade koni.
  - Barname faghat yek masraf az user migirad.

  example:
    Enter electricity consumption: 350

    Bill: 2900
    High electricity bill

  Yadet bashe: az TODO khali kon va code ra kamel kon!
  =========================================================
*/

#include <iostream>
using namespace std;

int main()
{ // TODO: masraf-e bargh ra az user begir
  double hazine;
  double usage;
  cout << "Enter your electricity usage: ";
  cin >> usage;
  if (usage < 0)
  {
    cout << "it's negetive:" << endl;
   
  }
  if (usage <= 100)
  {
    hazine = usage * 5;
    cout << "your Electricity cost is:" << hazine << endl;
   
  }
  if (usage > 100 && usage <= 300) 
  {
    hazine = 100 * 5  + (usage  - 100) * 8;
    cout << "your Electricity cost is:" << hazine << endl;
    
  }
if (usage > 300) 
  {
    hazine = 100 * 5  + 200 * 8 + (usage  - 300) * 12;
    cout << "your Electricity cost is:" << hazine << endl;
    
  }
  if ( hazine > 2000 ) 
  {
    cout << "High electricity bill" <<endl;
    
  }
  return 0;
}
// TODO: check kon ke masraf manfi nabashad

// TODO: hazine-ye bargh ra hesab kon

// TODO: agar hazine bishtar az 2000 bood,
//       payam-e marboot ra chap kon

// TODO: natije ra chap kon
