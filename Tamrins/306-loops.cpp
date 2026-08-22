/*
 * ============================================================================
 * C++ Homework Assignment: Loops, Functions, Accumulators, & Nested Loops
 * 
 * RAHNAMAEE:
 * 1. Kod haye zir ro bekhon va 13 ta tabe ro kamil kon.
 * 2. Signatures (name tabe va vorodi ha) va kodedaghl main() ro avaz nakon.
 * 3. Baraye har tabe tozihat va misal zadim ke daghighan bedoni chi mikham.
 * ============================================================================
 */

#include <iostream>
using namespace std;

// =====================================================
// Exercise 1: Print Even Numbers
// =====================================================
// TOZIH:
// Ye tabe benvis ke hameye adad haye ZOJ (Even) ro az 2 ta 'limit' chap kone.
// Mitoni az halghe 'for' ya 'while' estefade koni.
//
// Misal: PrintEvens(10);
// Khoroji e mord e entezar:
// 2 4 6 8 10 
void PrintEvents(int number)
{
    for(int i = 2; i <=number;i = i + 2)
    {
        cout << i <<endl;
    }
}
void EvenNumbers(int number)
{
    int sum = 6;
    for( int i = 0; i >=sum;)
    {
        cout << i <<endl;
        EvenNumbers(6);
    }
}


// =====================================================
// Exercise 2: Sum of Even Numbers
// =====================================================
// TOZIH:
// Majmoo (Sum) adad haye ZOJ az 1 ta 'number' ro hesab va chap kon.
// Ye motaghayyere jam-konande (accumulator) mese 'int sum = 0;' besaz.
//
// Misal: SumEvens(6);   (2 + 4 + 6 = 12)
// Khoroji:
// Sum of evens up to 6 = 12
void SumEvens(int number)
{
    // TODO: Mantegh e accumulator ro inja benvis
}


// =====================================================
// Exercise 3: Factorial Calculator
// =====================================================
// TOZIH:
// حاصل‌ضرب (Product) adad haye 1 ta 'n' ro hesab kon (Factorial: n!).
// Rahnamaee: Motaghayyere avaliye ro be jaye 0 az 1 shro kon (product = product * i).
//
// Misal: CalculateFactorial(5);  (1 * 2 * 3 * 4 * 5 = 120)
// Khoroji:
// 5! = 120
void CalculateFactorial(int n)
{
    // TODO: Halghe va mantegh ro inja benvis
}


// =====================================================
// Exercise 4: Custom Symbol Line
// =====================================================
// TOZIH:
// Karakter e 'symbol' ro be tedad e 'count' posht sar ham to YE KHAT chap kon.
// Akharesh ham ye 'endl' bezar ke bere khate badi.
//
// Misal: RepeatSymbol('*', 5);
// Khoroji:
// *****
void RepeatSymbol(char symbol, int count)
{
    // TODO: Halghe ro inja benvis
}


// =====================================================
// Exercise 5: Table of Squares
// =====================================================
// TOZIH:
// Ye jadval chap kon ke adad az 1 ta 'limit' va morabba-e shon (i * i) ro nishan bede.
//
// Misal: PrintSquares(4);
// Khoroji:
// 1 squared = 1
// 2 squared = 4
// 3 squared = 9
// 4 squared = 16
void PrintSquares(int limit)
{
    // TODO: Halghe ro inja benvis
}


// =====================================================
// Exercise 6: Count With Custom Step
// =====================================================
// TOZIH:
// Az 'start' shro kon ta 'end' chap kon, vali har bar be andazeye 'step' berau jolo.
//
// Misal: CountWithStep(5, 20, 5);
// Khoroji:
// 5 10 15 20 
void CountWithStep(int start, int end, int step)
{
    // TODO: Halghe ro inja benvis
}


// =====================================================
// Exercise 7: Reverse Range (Count Down)
// =====================================================
// TOZIH:
// Adad ro az 'start' be sorate makus (baraks) ta 'stop' chap kon.
// Az halgheye kam-shonde (i-- ya i -= 1) estefade kon.
//
// Misal: ReverseRange(10, 6);
// Khoroji:
// 10 9 8 7 6 
void ReverseRange(int start, int stop)
{
    // TODO: Halghe ro inja benvis
}


// =====================================================
// Exercise 8: Sum of Odd Numbers
// =====================================================
// TOZIH:
// Majmoo (Sum) adad haye FARD (Odd) az 1 ta 'limit' ro hesab va chap kon.
//
// Misal: SumOdds(7);  (1 + 3 + 5 + 7 = 16)
// Khoroji:
// Sum of odds up to 7 = 16
void SumOdds(int limit)
{
    // TODO: Mantegh e accumulator ro inja benvis
}


// =====================================================
// Exercise 9: Dynamic Multiplication Table
// =====================================================
// TOZIH:
// Jadval zarb e adade 'number' ro ta 'limit' chap kon (na faghat ta 10).
//
// Misal: CustomMultiplicationTable(3, 4);
// Khoroji:
// 3 * 1 = 3
// 3 * 2 = 6
// 3 * 3 = 9
// 3 * 4 = 12
void CustomMultiplicationTable(int number, int limit)
{
    // TODO: Halghe ro inja benvis
}


// =====================================================
// Exercise 10: Powers of Two
// =====================================================
// TOZIH:
// Tavan haye adade 2 ro az 2^1 ta 2^maxPower chap kon.
// Rahnamaee: Az zarbe motavali estefade kon (int power = 1; va to har marhale power *= 2).
//
// Misal: PrintPowersOfTwo(5);
// Khoroji:
// 2^1 = 2
// 2^2 = 4
// 2^3 = 8
// 2^4 = 16
// 2^5 = 32
void PrintPowersOfTwo(int maxPower)
{
    // TODO: Halghe ro inja benvis
}


// =====================================================
// Exercise 11: Star Triangle Up (Left-Aligned)
// =====================================================
// TOZIH:
// Ye mosallas ba '*' chap kon ke az 1 setareh shro beshe va to har khate badi 1 setareh ezafeh beshe ta be 'height' berase.
// Rahnamaee: Baraye in kar niaz be halghe haye to-dar-to (nested loops) dari.
//
// Misal: DrawTriangleUp(3);
// Khoroji:
// *
// **
// ***
void DrawTriangleUp(int height)
{
    // TODO: Halghe haye to-dar-to ro inja benvis
}


// =====================================================
// Exercise 12: Star Triangle Down (Left-Aligned)
// =====================================================
// TOZIH:
// Ye mosallas e baraks chap kon ke khate aval 'height' ta setareh daashte bashe va har khat 1 setareh kam beshe ta be 1 setareh berase.
//
// Misal: DrawTriangleDown(3);
// Khoroji:
// ***
// **
// *
void DrawTriangleDown(int height)
{
    // TODO: Halghe haye to-dar-to ro inja benvis
}


// =====================================================
// Exercise 13: Star Triangle Right-Aligned
// =====================================================
// TOZIH:
// Ye mosallas chap kon ke be simte RAST chaspideh bashe.
// Rahnamaee: To har khat ghabl az setareh ha niaz be chap kardane 'space' (faseleh) dari!
//
// Misal: DrawTriangleRightAligned(3);
// Khoroji:
//   *
//  **
// ***
void DrawTriangleRightAligned(int height)
{
    // TODO: Halghe haye to-dar-to va mantegh e space ro inja benvis
}


// =====================================================
// Test Runner (Dast be in bakhsh nazan)
// =====================================================
int main()
{
    cout << "=== Ex 1: Print Evens ===" << endl;
    PrintEvens(6);
    cout << endl;
    
    cout << "=== Ex 2: Sum Evens ===" << endl;
    SumEvens(6);
    cout << endl;

     cout << "=== Ex 3: Factorial ===" << endl;
    CalculateFactorial(5);
    cout << endl;

    cout << "=== Ex 4: Repeat Symbol ===" << endl;
    RepeatSymbol('#', 8);
    cout << endl;

    cout << "=== Ex 5: Table of Squares ===" << endl;
    PrintSquares(4);
    cout << endl;

    cout << "=== Ex 6: Count With Step ===" << endl;
    CountWithStep(5, 25, 5);
    cout << endl;

    cout << "=== Ex 7: Reverse Range ===" << endl;
    ReverseRange(10, 6);
    cout << endl;

    cout << "=== Ex 8: Sum Odds ===" << endl;
    SumOdds(7);
    cout << endl;

    cout << "=== Ex 9: Custom Multiplication Table ===" << endl;
    CustomMultiplicationTable(4, 5);
    cout << endl;

    cout << "=== Ex 10: Powers of Two ===" << endl;
    PrintPowersOfTwo(5);
    cout << endl;

    cout << "=== Ex 11: Star Triangle Up ===" << endl;
    DrawTriangleUp(4);
    cout << endl;

    cout << "=== Ex 12: Star Triangle Down ===" << endl;
    DrawTriangleDown(4);
    cout << endl;

    cout << "=== Ex 13: Star Triangle Right-Aligned ===" << endl;
    DrawTriangleRightAligned(4);
    cout << endl;

    return 0;
}