/*
  =========================================================
  Tamrin 203: Sang, Kaghaz, Gheychi (Rock, Paper, Scissors)
  =========================================================

  Salam! in tamrin  yadet mide ke chetori ba string,
  if/else va function kar koni.

  kar hayi ke bayad bokoni:
  1) Entekhab karbar ro be sorat string begir.
     Mishe: "rock", "paper", ya "scissors"
  2) Entekhab computer ham hameh "paper" ast.
  3) Ba estefade az if/else, bebin:
     - agar user "rock" begozarad va computer "paper" ast,
       pas computer bord.
     - agar user "paper" va computer "paper" ast,
       pas mosavi shod.
     - agar user "scissors" va computer "paper" ast,
       pas user bord.
  4) Function bayad yek string bar gardande hast.
     Baraye hamin in natije ha ro boro back kon:
       - "بردی!"
       - "کامپیوتر برد!"
       - "مساوی شد!"

  Nokat:
  - Baraye moghayese-ye do string az == estefade kon.
  - Mishe be in sorat nevesht:
        if (userChoice == "rock")
  - Ehtemalan az chandin if/else if estefade koni.

  Example:
    userChoice = "rock"
    computerChoice = "paper"
    output = "کامپیوتر برد!"

  Yadet bashe: TODO ra por kon va function ro tamam kon!
  =========================================================
*/
#include <iostream>
using namespace std;

string playRPS(string userChoice)
{
  string computerChoice = "paper";
  if (computerChoice == userChoice)
  {
    return "DRAW";
  }
  if (userChoice == "rock")
  {
    if (computerChoice == "scissors")
    {
      return "You WINS";
    }
    else
    {
      return "Computer WINS";
    }
  }
  if (userChoice == "scissors")
  {
    if (computerChoice == "rock")
    {
      return "computer WINS";
    }

    else
    {
      return "You WIN";
    }
  }

  if (userChoice == "paper")
  {
    if (computerChoice == "scissors")
    {
      return "computer WINS";
    }
    else
    {   
        return "You WIN";
    }
  }
  return "Inavalid Input Sozg";
} 


int main()
{
  cout << "playRPS" << "Enter your choice:"; // Input ha ra begir
  string UC;
  cin >> UC;
  string result = playRPS(UC); // Natije ra chap kon
  cout << result;
  return 0;
}