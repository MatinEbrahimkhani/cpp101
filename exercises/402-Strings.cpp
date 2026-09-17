/*
    C++ STRINGS — 15 EXERCISES
    Level: Beginner (age 15)
    Comments: Finglish (Persian written with English letters)

    RAVESH-E KAR:
    1) Aval code ra ba dast trace kon.
    2) Javab-e har khat-e chap ra ghabl az run benevis.
    3) Bad code-e soal-haye programming ra khodet benevis.
    4) Loop estefade nakon; har soal ba dastoorhaye sade hal mishavad.

    Remember:
    - string ba double quote: "cat"
    - char ba single quote: 'c'
    - index az 0 shoroo mishavad.
    - space ham yek character ast.
    - length() tedad-e character-ha ra mide.
*/

#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------
// EXERCISE 1 — STRING VA CHARACTER
// ------------------------------------------------------------
// string word = "BOOK";
//
// A) word[0] chist?
// B) word[2] chist?
// C) word[3] chist?
// D) word.length() chande?
// E) Aya word[4] mojood ast?
//
// HAND WORK:
// Index:       0      1      2      3
// Character:  ____   ____   ____   ____
// Javab: A ____  B ____  C ____  D ____  E __________________


// ------------------------------------------------------------
// EXERCISE 2 — SPACE HAM CHARACTER AST
// ------------------------------------------------------------
// string name = "Ali Reza";
//
// A) length() chande?
// B) name[3] chist?
// C) name[4] chist?
//
// HAND WORK:
// Character-ha ra yeki yeki benevis:
// 0: ____  1: ____  2: ____  3: ____
// 4: ____  5: ____  6: ____  7: ____
// length = ____


// ------------------------------------------------------------
// EXERCISE 3 — TAGHYIR-E CHARACTER
// ------------------------------------------------------------
// Code:
//
// string word = "cat";
// word[0] = 'b';
// word[2] = 'g';
//
// A) String-e nahayi chiye?
// B) length() taghyir karde?
//
// HAND WORK:
// Start:             [____, ____, ____]
// After first change:[____, ____, ____]
// After second:      [____, ____, ____]
// Final word = __________  length = ____


// ------------------------------------------------------------
// EXERCISE 4 — CONCATENATION
// ------------------------------------------------------------
// Code:
//
// string a = "Good";
// string b = "Morning";
// string c = a + " " + b;
//
// A) c chiye?
// B) c.length() chande?
//
// HAND WORK:
// a + " " = __________________
// natije + b = __________________
// c.length() = ____


// ------------------------------------------------------------
// EXERCISE 5 — +=
/* ------------------------------------------------------------
   Code:
   string message = "Hi";
   message += " ";
   message += "Ali";
   message += "!";
   A) Natije-ye message chiye?
   B) length() chande?
   HAND WORK:
   Start: __________________
   Ba'd az += " ": __________________
   Ba'd az += "Ali": __________________
   Ba'd az += "!": __________________
   length = ____
------------------------------------------------------------ */


// ------------------------------------------------------------
// EXERCISE 6 — PISHBINI-E OUTPUT
// ------------------------------------------------------------
// Code:
//
// string name = "Sara";
// cout << name[1] << endl;
// cout << name.length() << endl;
// name[0] = 'M';
// cout << name << endl;
//
// HAND WORK:
// Chap-e khat 1: ______
// Chap-e khat 2: ______
// Chap-e khat 3: ______


// ------------------------------------------------------------
// EXERCISE 7 — CIN YA GETLINE?
// ------------------------------------------------------------
// Baraye har voroodi benevis kodam matn dar variable gharar migirad.
//
// A) string name; cin >> name;
//    Voroodi karbar: Ali Reza
//    name = __________________
//
// B) string sentence; getline(cin, sentence);
//    Voroodi karbar: I like C++
//    sentence = __________________
//
// HAND WORK:
// Chera natije-ye A va B fargh darad?
// ____________________________________________________________


// ------------------------------------------------------------
// EXERCISE 8 — VOROODI-E ESM
// ------------------------------------------------------------
// Barname-i benevis ke:
// 1) yek string be esm name besazad.
// 2) yek kalame az karbar begirad ba cin.
// 3) chap konad: Hello, [name]!
//
// HAND WORK:
// Voroodi sample: Nima
// name = __________________
// output = __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 9 — MOGHAYESE-YE STRING
// ------------------------------------------------------------
// Code:
//
// string a = "Ali";
// string b = "ali";
//
// if (a == b) {
//     cout << "same";
// } else {
//     cout << "different";
// }
//
// A) Kodam payam chap mishavad?
// B) Chera?
//
// HAND WORK:
// a == b? ____
// Output: __________________
// Dalil: _____________________________________________________


// ------------------------------------------------------------
// EXERCISE 10 — CHECK KARDAN-E JAVAB
// ------------------------------------------------------------
// Barname-i benevis ke yek string be esm answer begirad.
// Agar answer daghighan "yes" bood, "Correct" chap konad.
// Dar gheyr-e in soorat "Not correct" chap konad.
//
// HAND WORK:
// Test 1: answer = "yes" -> __________________
// Test 2: answer = "Yes" -> __________________
// Test 3: answer = "no"  -> __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 11 — CHARACTER-E AVAL
// ------------------------------------------------------------
// string code = "B42";
//
// Barname-i benevis ke agar character-e aval 'B' bood,
// "Starts with B" chap konad; vagarna "Other code".
//
// HAND WORK:
// code[0] = ____
// code[0] == 'B'? ____
// Output: __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 12 — YEK CHARACTER RA PEYDA KON
// ------------------------------------------------------------
// string word = "PIZZA";
//
// A) word[0] chist?
// B) word[1] chist?
// C) word[4] chist?
// D) Agar word[1] = 'A'; anjam bedim, word chi mishe?
//
// HAND WORK:
// P I Z Z A
// 0 1 2 3 4
// Javab-ha: A ____ B ____ C ____ D __________________


// ------------------------------------------------------------
// EXERCISE 13 — SAKHTAN-E FULL NAME
// ------------------------------------------------------------
// Barname-i benevis ke firstName va lastName ra dashte bashad.
// Ba estefade az + va " " yek fullName besazad.
// Full name ra chap konad.
//
// HAND WORK:
// firstName = "Mina"
// lastName = "Karimi"
// fullName = ________________________________________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 14 — PAYAM-E SALAM
// ------------------------------------------------------------
// Barname-i benevis ke:
// 1) esm-e yek nafar ra ba cin begirad (yek kalame).
// 2) string greeting ra besazad: "Welcome, " + name + "!"
// 3) greeting ra chap konad.
// 4) length-e greeting ra ham chap konad.
//
// HAND WORK:
// Voroodi: Reza
// greeting = ________________________________________________
// length = ____
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 15 — CHALLENGE: CODE NAME
// ------------------------------------------------------------
// Barname-i benevis ke yek codeName az karbar begirad.
// Bad:
// - codeName ra chap konad.
// - character-e aval ra chap konad.
// - length ra chap konad.
// - agar character-e aval 'A' bood "A-code" chap konad,
//   vagarna "Other code" chap konad.
//
// Farz kon karbar hatman yek kalame-ye gheyr-e khali vared mikonad.
//
// HAND WORK:
// Voroodi sample: Apple
// codeName = __________________
// codeName[0] = ____
// length = ____
// if result = __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// OPTIONAL SELF-CHECK
// ------------------------------------------------------------
// 1) Baraye string az kodam quotation estefade mikonim? ______
// 2) Baraye char az kodam quotation estefade mikonim? ________
// 3) Index-e aval chande? ____________________________________
// 4) length() chi ra hesab mikonad? __________________________
// 5) cin >> va getline che farghi darand? ____________________
// 6) "Ali" == "ali" dorost ast? Chera? ________________________
// 7) Baraye vasl kardan-e string-ha az chi estefade mikonim? __
//
// Tamrin-e extra: yek string az khodet besaz va 3 dastoor rooye
// an ejra kon. Natije ra ba dast trace kon.
