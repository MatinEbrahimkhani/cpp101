
// ============================================================
// 01_Variables_Experiment.cpp
// ============================================================
//
// MOZO'E: Variables, Data Types & Type Conversion
//
// Dastoor-e asli:
// Ghabl az inke program ro run koni, TRY KON hads bezani!
// Yani aval begu output chi mishe, bad run kon va bebin
// C++ vaghean chi kar mikone.
//
// In file experimental-e.
// Hadaf in nist ke faghat code bezani.
// Hadaf ine ke befahmi C++ ba variable-ha chetori raftar mikone.
//
// ============================================================

#include <iostream>
using namespace std;

// ============================================================
// EXERCISE 01
// Bool is NOT a normal number
// ============================================================
//
// Tozih Finglish:
//
// bool faghat do meghdar asli dare:
//
//     true  -> 1
//     false -> 0
//
// Ama agar yek adad ro berizi dakhele bool:
//
//     0             -> false
//     har chi gheyr az 0 -> true
//
// Challenge:
//
// Ghabl az run kardan hads bezan output har kodom chie.
//
// Az khodet bepors:
//
//     bool a = 3.14;
//     bool b = 0;
//     bool c = -100;
//     bool d = false;
//
// Che meghdari chap mishe?
//
// ============================================================

void exercise01()
{
    cout << "\n========== EXERCISE 01 ==========\n";

    bool a = 3.14;
    bool b = 0;
    bool c = -100;
    bool d = false;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    bool e = 42;
    bool f = 1;
    bool g = false;

    cout << "e =" << e << endl;
    cout << "f =" << f << endl;
    cout << "g =" << g << endl;
    // Ye bool jadid besaz ke meghdar 42 begire.
    //
    // Hadset chie?
    // 0 mishe ya 1?
}

// ============================================================
// EXERCISE 02
// int vs float vs double
// ============================================================
//
// Tozih Finglish:
//
// Hamin adad ro dar 3 no'e mokhtalef variable gharar bede:
//
//     int
//     float
//     double
//
// int faghat adad-e sahih negah midare.
//
// float va double mitoonan adad-haye اعشاری ro negah daran.
//
// Challenge:
//
// Be khat-haye zir negah kon va ghabl az run hads bezan:
//
//     int a = 3.14;
//     float b = 3.14;
//     double c = 3.14;
//
// Che chizi az dast mire?
//
// ============================================================

void exercise02()
{
    cout << "\n========== EXERCISE 02 ==========\n";

    int a = 3.14;
    int x = -3.99;
    float b = 3.14;
    double c = 3.14;

    cout << "int    a = " << a << endl;
    cout << "int    x = " << x << endl;
    cout << "float  b = " << b << endl;
    cout << "double c = " << c << endl;

    // hadse man
    // int = 3   float & double = 3.14
    //
    // In ro ezafe kon:
    //
    // int x = -3.99;
    //
    // Befahm C++ ba -3.99 chekar mikone.
}

// ============================================================
// EXERCISE 03
// char is a number?!
// ============================================================
//
// Tozih Finglish:
//
// char baraye negah dashtan yek character estefade mishe.
//
// Ama dar C++ char dar asl yek adad-e koochek ham hast.
//
// Mesalan dar ASCII:
//
//     'A' -> 65
//     'B' -> 66
//     'a' -> 97
//
// Pas in do ta code che farghi daran?
//
//     char a = 'A';
//     char b = 65;
//
// Challenge:
//
// Ghabl az run hads bezan a va b che chizi chap mikonan.
//
// Bad in ro test kon:
//
//     char c = 97;
//
// ============================================================

void exercise03()
{
    cout << "\n========== EXERCISE 03 ==========\n";

    char a = 'A';
    char b = 60;
    char c = 97;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // Challenge:
    //
    // Bedoon lookup kardan, try kon character-e
    // marboot be adad-e 66 ro peyda kon.
    //
    // Mesalan:
    //
    // char mystery = 66;
    //
    // Output ro check kon.

    // Challenge-e dovom:
    //
    // In ro uncomment kon:
    //
    // cout << int(a) << endl;
    //
    // Chera A tabdil be 65 mishe?
}

// ============================================================
// EXERCISE 04
// Explicit type conversion
// ============================================================
//
// Tozih Finglish:
//
// Gahi vaghti C++ yek no'e variable ro be no'e digar
// tabdil mikone, khodesh conversion anjam mide.
//
// Ama ma mitoonim khodemon ham conversion ro darkhast konim.
//
// Mesalan:
//
//     double x = 9.99;
//     int y = int(x);
//
// Challenge:
//
// 1. Hads bezan y chie.
// 2. Barresi kon cheghadr az adad az dast mire.
// 3. Conversion ro baraye char ham test kon.
//
// ============================================================

void exercise04()
{
    cout << "\n========== EXERCISE 04 ==========\n";

    double x = 9.111111111;
    double g = double(x);

    cout << "x = " << x << endl;
    cout << "g = " << g << endl;

    char letter = char(60);

    cout << "letter = " << letter << endl;

    // Challenge:
    //
    // Ye double besaz:
    //
    // double price = 19.99;
    //
    // Bad price ro be int tabdil kon.
    //
    // Aya 19.99 be 20 tabdil mishe?
    // Ya 19?
    //
    // Ghabl az run javab bede.

    // Challenge-e bishtar:
    //
    // int number = 65;
    // cout << char(number) << endl;
    //
    // Bad barعکسesh ro ham test kon:
    //
    // char letter2 = 'A';
    // cout << int(letter2) << endl;
}

// ============================================================
// EXERCISE 05
// Integer division
// ============================================================
//
// Tozih Finglish:
//
// In yeki az mohem-tarin dam-haye avalie C++ hast.
//
// Agar do taraf-e taghsim int bashan:
//
//     7 / 2
//
// Natije 3 mishe, na 3.5.
//
// Chon C++ integer division anjam mide.
//
// Ama:
//
//     7.0 / 2
//
// ya:
//
//     7 / 2.0
//
// Mitone natije-ye اعشاری bede.
//
// Challenge:
//
// Aval tamam-e output-ha ro hads bezan.
//
// ============================================================

void exercise05()
{
    cout << "\n========== EXERCISE 05 ==========\n";

    int a = 7;
    int b = 2;

    double result1 = 7 / 2;
    double result2 = 7.0 / 2;
    double result3 = 7 / 2.0;

    cout << "result1 = " << result1 << endl;
    cout << "result2 = " << result2 << endl;
    cout << "result3 = " << result3 << endl;

    // Challenge:
    //
    // Be nazaret result1 bayad 3.5 bashe.
    //
    // Pas chera 3 mishe?
    //
    // Nokat:
    // type-e operation mohem-e, na faghat type-e
    // variable-i ke natije ro receive mikone.

    // Challenge-e asli:
    //
    // In ro besaz:
    //
    // int x = 5;
    // int y = 2;
    // double z = x / y;
    //
    // Bad ye ravesh peyda kon ke z = 2.5 beshe.
}

// ============================================================
// EXERCISE 06
// Integer overflow
// ============================================================
//
// Tozih Finglish:
//
// Har variable yek mahdoodiyat dare.
//
// Masalan int yek range-e mahdood dare.
//
// Agar az maximum-e range bishtar beshe,
// momkene overflow ro bebinim.
//
// Challenge:
//
// Ghabl az run hads bezan:
//
//     int x = 2147483647;
//     x = x + 1;
//
// Che etefaghi miofte?
//
// IMPORTANT:
//
// Behavior-e دقیق-e overflow baraye signed int dar C++
// موضوع پیچیده‌تری ast. Hadaf-e in exercise in-e ke
// befahmi type-ha mahdoodiyat daran.
//
// ============================================================

void exercise06()
{
    cout << "\n========== EXERCISE 06 ==========\n";

    int x = 2147483641;

    cout << "Before: " << x << endl;

    x = x + 1;

    cout << "After : " << x << endl;

    // Challenge:
    //
    // Ye int ba meghdar-e bozorg tarif kon.
    //
    // Bad test kon che vaght natije ajeeb mishe.
    //
    // Hadaf in exercise fahmidan-e mahdoodiyat-e
    // type-e integer ast.
}

// ============================================================
// EXERCISE 07
// sizeof()
// ============================================================
//
// Tozih Finglish:
//
// C++ yek operator dare be esm-e sizeof.
//
// Ba sizeof mitoonim befahmim yek type ya variable
// chand byte faza اشغال mikone.
//
// Mesalan:
//
//     sizeof(int)
//
// ya:
//
//     sizeof(x)
//
// Challenge:
//
// Size-e in type-ha ro check kon:
//
//     bool
//     char
//     int
//     float
//     double
//
// Aya hamashoon yeki hastan?
//
// ============================================================

void exercise07()
{
    cout << "\n========== EXERCISE 07 ==========\n";

    bool a = true;
    char b = 'A';
    int c = 10000000;
    float d = 3.14f;
    float e = 3.14;
    cout << "sizeof(bool)   = " << sizeof(bool) << endl;
    cout << "sizeof(char)   = " << sizeof(char) << endl;
    cout << "sizeof(int)    = " << sizeof(int) << endl;
    cout << "sizeof(float)  = " << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;

    cout << endl;

    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(b) = " << sizeof(b) << endl;
    cout << "sizeof(c) = " << sizeof(c) << endl;
    cout << "sizeof(d) = " << sizeof(d) << endl;
    cout << "sizeof(e) = " << sizeof(e) << endl;

    // Challenge:
    //
    // Aya sizeof(variable) va sizeof(type)
    // hamishe yeki hastan?
    //
    // Chera?

    // Challenge-e bishtar:
    //
    // In do ta ro check kon:
    //
    // sizeof(3.14)
    // sizeof(3.14f)
    //
    // Aya in do ta yeki hastan?
}

// ============================================================
// EXERCISE 08
// const variables
// ============================================================
//
// Tozih Finglish:
//
// const yani variable bad az مقداردهی اولیه
// nabayad taghir kone.
//
// Mesalan:
//
//     const int age = 20;
//
// Badan nemitooni benevisi:
//
//     age = 30;
//
// Compiler bayad error bede.
//
// Challenge:
//
// 1. const tarif kon.
// 2. Meghdaresh ro chap kon.
// 3. Khat-e taghir dadan ro uncomment kon.
// 4. Error-e compiler ro bekhoon.
//
// Hadaf in exercise ine ke yad begiri
// compiler error ham mitoone yek tajrobe-ye mofid bashe.
//
// ============================================================

void exercise08()
{
    cout << "\n========== EXERCISE 08 ==========\n";

    const int age = 20;
    cout << "age = " << age << endl;

    // Uncomment this line and compile again:
    //
    // const int age = 25;
    //
    // Compiler che chizi behet mige?

    // Challenge:
    //
    // const double PI = 3.14159;
    //
    // Try kon PI ro taghir bedi.
}

// ============================================================
// EXERCISE 09
// Scope of variables
// ============================================================
//
// Tozih Finglish:
//
// Variable-ha hamishe dar kol-e program قابل دسترسی nistand.
//
// Variable-i ke dakhele { } ساخته mishe,
// mamoolan faghat dakhele hamoon scope قابل استفاده ast.
//
// Mesal:
//
//     {
//         int x = 10;
//     }
//
// Kharej az in block, x dige قابل دسترسی nist.
//
// Challenge:
//
// Ghabl az run kardan پیش‌بینی kon kodoom x chap mishe.
//
// ============================================================

void exercise09()
{
    cout << "\n========== EXERCISE 09 ==========\n";

    int x = 10;

    cout << "Outside 1: " << x << endl;

    {
        int x = 20;

        cout << "Inside:    " << x << endl;
    }

    cout << "Outside 2: " << x << endl;
}
// Challenge:
//
// Yek block-e jadid besaz:
//
// {
//     int x = 100;
//     cout << x << endl;
// }
//
// Aya x-e asli taghir karde?

// Challenge-e tricky:
//
// In code ro dar zehnet analyze kon:
//
// int x = 10;
//
// {
//     int x = 20;
//
//     {
//         int x = 30;
//         cout << x << endl;
//     }
// }
//
// Se ta x darim!
//
// Har kodom متعلق be kodoom scope hast?
// }

// ============================================================
// EXERCISE 10
// Assignment vs Initialization + mixed types
// ============================================================
//
// Tozih Finglish:
//
// In exercise chand concept ro ba ham ترکیب mikone.
//
// In do ta yeki nistan:
//
//     int x = 10;   // initialization
//
// va:
//
//     x = 20;       // assignment
//
// Hamchenin vaghti type-ha mokhtalef bashan,
// C++ momkene مقدار ro convert kone.
//
// Challenge:
//
// Ghabl az run tamam-e output-ha ro rooye کاغذ benevis.
//
// ============================================================

void exercise10()
{
    cout << "\n========== EXERCISE 10 ==========\n";

    int a = 10;

    double b = a;

    double c = 20.99;

    int d = c;

    char e = 65;

    int f = e;

    bool g = -5;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    cout << "g = " << g << endl;
}
// ========================================================
// FINAL CHALLENGE
// ========================================================
//
// Without running the program, answer these questions:
//
// 1. Why is b not an int? becuase we were copy that as a.
//
// 2. What happened to .99 when c was stored in d? we made that to sahih number.
//
// 3. Why does e print a character? A = 65.
//
// 4. Why does f print a number? e = 65.
//
// 5. Why is g equal to 1? 1 = true.
//
// 6. Which conversions happened automatically? e
//
// 7. Which conversions did YOU explicitly request? f
//
// 8. Which variables contain the same information
//    but represent it using different types? g
// }
void KHALAJICL()
{
    for (int i = 0; i < 256; i++)
    {
        cout << "adad = " << i << "   " << char(i) << " " << "\t\n";
    }
    cout << "rahbare shahidam.cpp";
}
int main()
{
    // exercise01();
    // exercise02();
    // exercise03();
    //  exercise04();
    //  exercise05();
    //  exercise06();
    //  exercise07();
    //  exercise08();
    //  exercise09();
    //  exercise10();
    KHALAJICL();
    return 0;
}
