
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

struct Student
{
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
// name = _____Ali_____
// age = __15__
// score = ___18.5___

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
// name __Mina____  age __14__  score _16___
//
// After s.age = 15:
// name ___Mina___  age __15__  score __16__
//
// After s.score = 19:
// name ___Mina___  age __15__  score __19__

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
// a -> name ___Nima___  age __15__  score __17__
// b -> name ___Tara___  age __16__  score __20__
//
// Ba'd az taghyir:
// a.score = __18__
// b.score = __20__

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
// Line 1: ________Reza__________
// Line 2: ________16__________
// Line 3: ________12.5__________

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
// 9 >= 10? __kheir ghalat ast?__
// Output: ___retry_______________

// ============================================================
// EXERCISE 6 — TARIF-E STRUCT
// ============================================================
//
// Yek struct be esm Book tarif kon ke in member-ha ra dashte bashad:
//
// - string title
// - string author
// - int pages
struct Book
{
    string title;
    string author;
    int pages;
};

void exercise06()
{
    Book b1 = {
        title : "The Little Prince",
        author : "Antoine",
        pages : 96
    };
    cout << b1.title << " | " << b1.author << " | " << b1.pages<< endl;
}
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
// 1.5 * 6 = _____9_____

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
// Student s = {_____Omid_____, __15__, ___14.5___};
//
// CODE:
// Inja code-e khodet ra benevis.

// ============================================================
// EXERCISE 9 — VOROODI AZ KARBAR
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
// s.name = ___Aria_______
// s.age = __15__
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
// name ___Parsa___  age __15__  score __13__
//
// Final:
// name ___parya___  age __16__  score __13__

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
struct student {
    string name;
    int age;
};
student s = {name:"mobin",age : 24};
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
// 10 > 15? __kheir__
// Output: ________Kian__________
//
// CODE:
// Inja code-e khodet ra benevis.\
// ============================================================
// EXERCISE 13 — STUDENT REPORT
// ============================================================
//
// Barname-i benevis ke yek Student ba value-haye zir besazad:
struct Info {
    string name;
    int age;
    int score;
};
void exercise13 () {
    Info i = {name: "Sina",age: 15, score: 17};
    cout<< "Name: " << i.name  << endl;
    cout << "Age: " << i.age << endl;
    cout << "Score: " << i.score<<endl;
}
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
// s.name = ___Sina___
// s.age = __15__
// s.score = __17__
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

int main()
{
    cout << "C++ Structs — Exercises\n";
    cout << "Har soal ra joda hal kon.\n";
    // exercise06();
    // exercise09();
       exercise13(); 
    return 0;
}