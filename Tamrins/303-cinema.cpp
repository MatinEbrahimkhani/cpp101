/*
  =========================================================
  Tamrin 303: Gheymat-e Belit-e Cinema
  =========================================================

  Salam! in tamrin baraye in ast ke ba if va nested if
  bishtar kar koni!

  Barname bayad gheymat-e belit-e cinema ra bar asas-e
  sen va daneshjoo boodan-e fard mohasebe konad.

  Gheymat-e asli belit: 200

  Ghavanin:

  1) Agar sen kamtar az 5 bood:
       Belit free ast.
       Gheymat = 0

  2) Agar sen beyn 5 ta 12 bood:
       Gheymat = 100
       Agar daneshjoo bood:
           gheymat = 80

  3) Agar sen beyn 13 ta 59 bood:
       Gheymat = 200
       Agar daneshjoo bood:
           gheymat = 150

  4) Agar sen 60 ya bishtar bood:
       Gheymat = 120

  5) Daneshjoo boodan ra mitavani ba yek variable
     mesl-e student check koni:

       1 = Yes
       0 = No

  Nokat:
  - Az loop estefade nakon.
  - Az switch estefade nakon.
  - Koshesh kon az nested if estefade koni.
  - Barname bayad sen va student boodan ra az user begirad.

  example:

    Enter your age: 20
    Are you a student? (1 = Yes, 0 = No): 1

    Ticket price: 150

  example 2:

    Enter your age: 8
    Are you a student? (1 = Yes, 0 = No): 0

    Ticket price: 100

  Yadet bashe: az TODO khali kon va code ra kamel kon!
  =========================================================
*/

#include <iostream>
using namespace std;

int main()
{

  int daneshjoo;
  int sen;
  int daneshamooz;
  cout << "sen re vared kon:";
  cin >> sen;
  cout << "daneshamuz hasti?";
  cin >> daneshamooz;
  cout << "daneshjoo hasti ?";
  cin >> daneshjoo;
  if (sen < 5)
  {
    cout << "belit moft ast";
  } // TODO: sen ra az user begir
  if (5 < sen && sen < 12)
  {
    if (daneshamooz == 1)
    {
      cout << "Gheymat 80 tooman ast";
    }
    else
    {
      cout << "Gheymat 100 tooman ast";
    }
  }
  if (13 < sen && sen < 59)
  {
    if (daneshamooz == 1)
    {
      cout << "Gheymat 200 tooman ast";
    }
    else
    {
      cout << "Geymat 150 toman ast";
    }
  }
  if (sen >= 60)
  {
    cout << "Gheymat 120 tooman ast";
  }
  return 0;
}
