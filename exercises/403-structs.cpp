
#include <iostream>
#include <string>
using namespace std;

/*
    C++ STRUCTS — 15 EXERCISES
    Level: Beginner (age 15)
    Comments: Finglish

    RAVESH-E KAR:
    1. Aval har soal ra ba dast trace kon.
    2. Javab-e khod ra ghabl az run benevis.
    3. Baraye soal-haye programming, code ro khodet benevis.
    4. Loop estefade nakon.

    Remember:
    - struct type-e jadid tarif mikonad.
    - object yek variable az type-e struct ast.
    - dot (.) baraye dastresi be member estefade mishavad.
    - Tartib-e initialize bayad ba tartib-e member-ha yeki bashad.
*/

struct Student {
    string name;
    int age;
    double score;
};


// ============================================================
// EXERCISE 1 — MEMBER HA
// ============================================================
//
// Student s = {"Ali", 15, 18.5};
//
// A) s.name chist?
// B) s.age chist?
// C) s.score chist?
//
// HAND WORK:
// name = __________
// age = ____
// score = ______


// ============================================================
// EXERCISE 2 — DOT OPERATOR
// ============================================================
//
// Student s = {"Mina", 14, 16};
// s.age = 15;
// s.score = 19;
//
// A) s.age chande?
// B) s.score chande?
// C) s.name taghyir karde?
//
// HAND WORK:
// Start:
// name ______  age ____  score ____
//
// After s.age = 15:
// name ______  age ____  score ____
//
// After s.score = 19:
// name ______  age ____  score ____


// ============================================================
// EXERCISE 3 — DO OBJECT
// ============================================================
//
// Student a = {"Nima", 15, 17};
// Student b = {"Tara", 16, 20};
// a.score = 18;
//
// A) a.score chande?
// B) b.score chande?
// C) b.name chist?
//
// HAND WORK:
// a -> name ______  age ____  score ____
// b -> name ______  age ____  score ____
//
// Ba'd az taghyir:
// a.score = ____
// b.score = ____


// ============================================================
// EXERCISE 4 — PISHBINI-E OUTPUT
// ============================================================
//
// Student s = {"Reza", 15, 12.5};
//
// cout << s.name << endl;
// cout << s.age + 1 << endl;
// cout << s.score << endl;
//
// HAND WORK:
// Line 1: __________________
// Line 2: __________________
// Line 3: __________________


// ============================================================
// EXERCISE 5 — IF BA SCORE
// ============================================================
//
// Student s = {"Laleh", 15, 9};
//
// if (s.score >= 10) {
//     cout << "pass";
// } else {
//     cout << "retry";
// }
//
// A) Shart dorost ast ya ghalat?
// B) Output chist?
//
// HAND WORK:
// 9 >= 10? ____
// Output: __________________


// ============================================================
// EXERCISE 6 — TARIF-E STRUCT
// ============================================================
//
// Yek struct be esm Book tarif kon ke in member-ha ra dashte bashad:
//
// - string title
// - string author
// - int pages
//
// Bad yek object be esm book1 besaz va meghdar bede:
//
// title = "The Little Prince"
// author = "Antoine"
// pages = 96
//
// HAND WORK:
// Type name: __________
// Member-ha: ________________________________________________
// Object name: __________
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// EXERCISE 7 — PRODUCT
// ============================================================
//
// struct Product {
//     string name;
//     double price;
//     int quantity;
// };
//
// Product p = {"Pencil", 1.5, 6};
//
// A) p.name chist?
// B) p.quantity chande?
// C) price * quantity chande?
//
// HAND WORK:
// 1.5 * 6 = __________


// ============================================================
// EXERCISE 8 — SAKHTAN-E OBJECT BA VALUE
// ============================================================
//
// Ba estefade az struct Student, yek object be esm s besaz.
//
// Meghdar-ha:
// name = "Omid"
// age = 15
// score = 14.5
//
// HAND WORK:
// Student s = {__________, ____, ______};
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// EXERCISE 9 — VOROODI AZ KARBAR
// ============================================================
//
// Barname-i benevis ke:
// 1) yek Student besazad.
// 2) name va age ra az karbar begirad.
// 3) name va age ra chap konad.
//
// Farz kon name yek kalame ast.
//
// HAND WORK:
// Sample input: Aria 15
//
// s.name = __________
// s.age = ____
//
// Output: _________________________________________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// EXERCISE 10 — TAGHYIR VA CHAP
// ============================================================
//
// Student s = {"Parsa", 15, 13};
// s.name = "Parya";
// s.age = 16;
//
// A) Output-e s.name chist?
// B) Output-e s.age chist?
// C) s.score chande?
//
// HAND WORK:
// Start:
// name ______  age ____  score ____
//
// Final:
// name ______  age ____  score ____


// ============================================================
// EXERCISE 11 — ESHtebah-YABI
// ============================================================
//
// In code eshtebah darad:
//
// struct Student {
//     string name;
//     int age;
// }
//
// Student s;
//
// A) Kodam alamat faramoosh shode?
// B) Code-e dorost ra benevis.
//
// HAND WORK:
// ______________________________________________
//
// CODE:
// Inja code-e dorost ra benevis.


// ============================================================
// EXERCISE 12 — MOGHAYESE-YE PLAYER HA
// ============================================================
//
// struct Player {
//     string name;
//     int points;
// };
//
// Player p1 = {"Ava", 10};
// Player p2 = {"Kian", 15};
//
// Agar p1.points > p2.points bood "Ava" chap kon;
// vagarna "Kian" chap kon.
//
// HAND WORK:
// 10 > 15? ____
// Output: __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// EXERCISE 13 — STUDENT REPORT
// ============================================================
//
// Barname-i benevis ke yek Student ba value-haye zir besazad:
//
// name = "Sina"
// age = 15
// score = 17
//
// Bad in 3 khat ra chap kon:
//
// Name: Sina
// Age: 15
// Score: 17
//
// HAND WORK:
// s.name = ______
// s.age = ____
// s.score = ____
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// EXERCISE 14 — STRUCT VA IF
// ============================================================
//
// Barname-i benevis ke yek Student ba name va score dashte bashad.
//
// Agar score >= 10 bood "Passed" chap konad;
// vagarna "Needs practice" chap konad.
//
// HAND WORK:
// Test 1: score = 8  -> __________________
// Test 2: score = 10 -> __________________
// Test 3: score = 17 -> __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// EXERCISE 15 — CHALLENGE: SHOPPING ITEM
// ============================================================
//
// Struct Item tarif kon ba:
//
// string name
// double price
// int quantity
//
// Barname-i benevis ke:
// 1) yek Item besazad ba:
//    name = "Notebook"
//    price = 2.5
//    quantity = 4
//
// 2) name va quantity ra chap konad.
// 3) total = price * quantity ra hesab konad.
// 4) total ra chap konad.
// 5) agar total >= 10 bood "Big purchase",
//    vagarna "Small purchase" chap konad.
//
// HAND WORK:
// name = __________
// price = ____
// quantity = ____
//
// total = ____ * ____ = ____
//
// total >= 10? ____
// Output: __________________
//
// CODE:
// Inja code-e khodet ra benevis.


// ============================================================
// OPTIONAL SELF-CHECK
// ============================================================
//
// 1) struct baraye chi estefade mishavad?
//    ________________________________________________________
//
// 2) object chist?
//    ________________________________________________________
//
// 3) dot (.) che kar mikonad?
//    ________________________________________________________
//
// 4) Aya member-haye yek struct mitavanand type-haye mokhtalef
//    dashte bashand?
//    ________________________________________________________
//
// 5) Aya do object az yek struct data-ye joda darand?
//    ________________________________________________________
//
// 6) Ba'd az akharin } dar tarif struct che alamat mikhahim?
//    ________________________________________________________
//
// Tamrin-e extra:
// Yek struct be esm Pet besaz ba member-haye:
// string name
// int age
// string kind
//
// Yek object besaz va har member ra chap kon.

int main() {
    cout << "C++ Structs — Exercises\n";
    cout << "Har soal ra joda hal kon.\n";

    return 0;
}