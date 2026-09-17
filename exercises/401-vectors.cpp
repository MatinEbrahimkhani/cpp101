/*
    C++ VECTORS — 15 EXERCISES
    IMPORTANT:
    - Aval har s`oal ra ba dast hal kon; code ro hanooz ejra nakon.
    - Jadval-e trace ra por kon: value-ha va size ra ba'd az har dastoor benevis.
    - Baraye soal-haye code, pas az pishbini code ro benevis va ejra kon.
    - In file intentionally loop nadarad. Agar loop-hara hanooz nakhande-id,
      hame chiz ra ba index-haye mostaghim anjam bede.
    - Dar har soal, agar soal azat khast, faghat code-e hamoon soal ra benevis.

    Remember:
    vector<int> numbers = {4, 7, 2};
    index:                    0  1  2
    size() = 3
    Akharin index = size() - 1 = 2
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ------------------------------------------------------------
// EXERCISE 1 — INDEX HA
// ------------------------------------------------------------
// In vector ra dar nazar begir:
//
// vector<int> a = {6, 12, 19, 25};
//
// A) a[0] chande?
// B) a[2] chande?
// C) a[3] chande?
// D) size() chande?
// E) Akharin index chande?
// F) a[4] mojood ast? Chera?
//
// HAND WORK:
// Index:       0      1      2      3
// Value:      ____   ____   ____   ____
//
// Javab-ha:
// A ____  B ____  C ____  D ____  E ____  F __________________


// ------------------------------------------------------------
// EXERCISE 2 — TAGHYIR-E VALUE
// ------------------------------------------------------------
// Code:
//
// vector<int> a = {3, 8, 5};
// a[0] = 10;
// a[2] = 7;
//
// A) Vector-e nahayi chiye?
// B) size() taghyir mikone ya na?
//
// HAND WORK:
// Ghabl:  [____, ____, ____]
// Dastoor 1 ba'd: [____, ____, ____]
// Dastoor 2 ba'd: [____, ____, ____]
// size() = ____


// ------------------------------------------------------------
// EXERCISE 3 — PUSH_BACK
// ------------------------------------------------------------
// Code:
//
// vector<int> a = {2, 4};
// a.push_back(9);
// a.push_back(1);
//
// A) Vector-e nahayi ra benevis.
// B) size() chande?
// C) Index-e adad 9 chande?
// D) Index-e adad 1 chande?
//
// HAND WORK:
// Start:             [____, ____]            size = ____
// After push_back 9: [____, ____, ____]      size = ____
// After push_back 1: [____, ____, ____, ____] size = ____


// ------------------------------------------------------------
// EXERCISE 4 — POP_BACK
// ------------------------------------------------------------
// Code:
//
// vector<int> a = {11, 22, 33, 44};
// a.pop_back();
// a.pop_back();
//
// A) Vector-e nahayi chiye?
// B) size() chande?
// C) Akharin item-e baghimande chande?
//
// HAND WORK:
// Start:             [____, ____, ____, ____] size = ____
// After pop_back:    [____, ____, ____, ____] size = ____
// After pop_back:    [____, ____, ____, ____] size = ____


// ------------------------------------------------------------
// EXERCISE 5 — SIZE VA INDEX
// ------------------------------------------------------------
// Baraye har vector, size() va akharin index ra peyda kon.
//
// A) vector<int> a = {5};
// B) vector<int> b = {5, 7, 9};
// C) vector<int> c = {1, 2, 3, 4, 5};
//
// HAND WORK:
// Vector A: size = ____  last index = ____
// Vector B: size = ____  last index = ____
// Vector C: size = ____  last index = ____
//
// Yadآvari: size tedad-e item-hast; index az sefr shoroo mishavad.


// ------------------------------------------------------------
// EXERCISE 6 — PISHBINI-E OUTPUT
// ------------------------------------------------------------
// Output-e in code ra ghabl az ejra benevis:
//
// vector<int> points = {4, 6, 8};
// cout << points[1] << endl;
// points[1] = 3;
// cout << points[1] << endl;
// cout << points.size() << endl;
//
// HAND WORK:
// Khate chap-e 1: ______
// Khate chap-e 2: ______
// Khate chap-e 3: ______


// ------------------------------------------------------------
// EXERCISE 7 — CIN VA VECTOR
// ------------------------------------------------------------
// Barname-i benevis ke:
// 1) vector<int> ba 3 item besazad.
// 2) 3 adad az karbar begirad va dar index-haye 0, 1, 2 bezarad.
// 3) item-e index 0 va index 2 ra chap konad.
//
// HAND WORK / PLAN:
// Variable-ha: ______________________________________________
// Voroodi sample: 7 14 21
// Pas vector mishe: [____, ____, ____]
// Output bayad bashe: ________________________________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 8 — IF VA VECTOR
// ------------------------------------------------------------
// Vector-e nomre-ha:
// vector<int> scores = {8, 15, 10};
//
// Barname-i benevis ke:
// - baraye scores[0] agar >= 10 bood "pass" chap konad, vagarna "retry"
// - baraye scores[1] hamin check ra anjam dahad
//
// HAND WORK:
// 8 >= 10? ____  Pas chap mishavad: __________
// 15 >= 10? ____ Pas chap mishavad: __________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 9 — JAM-E SE ADAD
// ------------------------------------------------------------
// vector<int> prices = {12, 5, 8};
//
// Ba estefade az int total = 0; va jam kardan-e item-ha,
// gheymat-e kol ra hesab kon. Loop estefade nakon.
//
// HAND WORK:
// total aval = ____
// total = total + prices[0] = ____ + ____ = ____
// total = total + prices[1] = ____ + ____ = ____
// total = total + prices[2] = ____ + ____ = ____
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 10 — LIST-E ESM-HA
// ------------------------------------------------------------
// vector<string> friends = {"Nima", "Tara", "Omid"};
//
// A) Dastoor-e chap kardan-e "Tara" ra benevis.
// B) "Laleh" ra ba push_back ezafe kon.
// C) size() ba'd az ezafe kardan chande?
// D) Item-e jadid dar kodam index ast?
//
// HAND WORK:
// Start: [____________, ____________, ____________]
// After push_back: [____________, ____________, ____________, ____________]
// size = ____   new index = ____
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 11 — PEYDA KARDAN-E ESHTEBAH
// ------------------------------------------------------------
// In code eshtebah darad:
//
// vector<int> a = {10, 20, 30};
// cout << a[3];
//
// A) Chera a[3] eshtebah ast?
// B) Baraye chap kardan-e 30 kodam index bayad estefade shavad?
// C) Code-e dorost ra benevis.
//
// HAND WORK:
// Index-ha: 0 -> ____   1 -> ____   2 -> ____
// size = ____
// CODE-E DOROST:
// ______________________________________________


// ------------------------------------------------------------
// EXERCISE 12 — TAGHYIR + EZAFE + HAZF
// ------------------------------------------------------------
// Code ra trace kon:
//
// vector<int> a = {2, 4, 6};
// a[1] = 9;
// a.push_back(12);
// a.pop_back();
//
// A) Vector-e nahayi?
// B) size()?
// C) a[1]?
//
// HAND WORK:
// Start:                  [____, ____, ____] size = ____
// After a[1] = 9:         [____, ____, ____] size = ____
// After push_back(12):    [____, ____, ____, ____] size = ____
// After pop_back():       [____, ____, ____, ____] size = ____


// ------------------------------------------------------------
// EXERCISE 13 — NOMRE-HAYE EMTEHAN
// ------------------------------------------------------------
// Barname-i benevis ke 3 nomre az karbar begirad.
// Bad:
// - nomre-ye aval ra chap konad.
// - agar nomre-ye dovom 10 ya bishtar bood "second score: pass"
//   chap konad; dar gheyr-e in soorat "second score: retry" chap konad.
// - tedad-e nomre-ha ra chap konad.
//
// HAND WORK:
// Voroodi sample: 13 9 17
// Vector: [____, ____, ____]
// scores[1] >= 10? ____
// Natije-ye if: ____________________
// size = ____
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 14 — KHARID-E KOCHAK
// ------------------------------------------------------------
// 3 gheymat dar vector gharar darand: {7, 4, 6}.
// Barname-i benevis ke:
// - total ra ba jam-e se item hesab konad.
// - total ra chap konad.
// - agar total >= 15 bood "enough items" chap konad,
//   vagarna "less than 15" chap konad.
//
// HAND WORK:
// 7 + 4 = ____
// ____ + 6 = total ____
// total >= 15? ____
// Output: ____________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// EXERCISE 15 — CHALLENGE: SAKHTAN-E VECTOR BA VOROODI
// ------------------------------------------------------------
// Barname-i benevis ke:
// 1) yek vector<int> khali besazad.
// 2) az karbar yek adad begirad va ba push_back ezafe konad.
// 3) adad-e dovom ra ham begirad va ezafe konad.
// 4) adad-e sevvom ra ham begirad va ezafe konad.
// 5) size() ra chap konad.
// 6) item-e index 0 va index 2 ra chap konad.
//
// Loop estefade nakon.
//
// HAND WORK:
// Voroodi sample: 3 10 25
// Ba'd az voroodi 3:  [____]              size = ____
// Ba'd az voroodi 10: [____, ____]        size = ____
// Ba'd az voroodi 25: [____, ____, ____]  size = ____
// index 0 = ____    index 2 = ____
//
// CODE:
// Inja code-e khodet ra benevis.


// ------------------------------------------------------------
// OPTIONAL SELF-CHECK — JAVABHA RA BA'D AZ TAMAM KARDAN BENEVIS
// ------------------------------------------------------------
// 1) Index az chand shoroo mishavad? __________________________
// 2) size() tedad ra mide ya index ra? ________________________
// 3) push_back() chi kar mikone? ______________________________
// 4) pop_back() chi kar mikone? _______________________________
// 5) Agar size() = 5 bashad, akharin index chande? _____________
// 6) Aya vector<int> mitavand string negah darad? ______________
//
// Tamrin-e extra: baraye har javab yek mesal az khodet besaz.
