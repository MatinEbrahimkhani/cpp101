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
void PrintEvens(int number)
{
    for (int i = 2; i <= number; i = i + 2)
    {
        cout << i << endl;
    }
}
void EvenNumbers(int number)
{
    int sum = 6;
    for (int i = 0; i >= sum;)
    {
        cout << i << endl;
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
    int sum = 0;
    for (int i = 2; i <= number; i += 2)
    {
        sum += i; // sum = sum + i;
    }
    cout << number << " = " << sum << endl;
}
void SumEvenswhile(int number)
{
    int sum = 0;
    int i = 2;
    while (i <= number)
    {
        sum = sum + i;
        i += 2;
    }
    cout << "Sum of evens up to " << number << " = " << sum << endl;
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
    int factorial = 1;
    for (int i = n; i >= 1; i = i - 1)
    {
        factorial = i * factorial;
    }
    cout << "factrial is" << factorial << endl;
}

// =====================================================
// Exercise 4: Custom Symbol Line
// =====================================================
// TOZIH:
// Karakter e 'heshmat' ro be tedad e 'count' posht sar ham to YE KHAT chap kon.
// Akharesh ham ye 'endl' bezar ke bere khate badi.
// m + i;

// Misal: Repeatheshmat('*', 5);
// Khoroji:
// *****
void Repeatheshmat(string heshmat, int count)
{

    for (int i = 0; i < count; i++)
    {
        cout << heshmat;
    }
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
    for (int i = 1; i < limit; i++)
    {
        cout << "square of" << "  " << i << "  " << "is" << "   " << i * i << endl;
    }
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
    for (int i = start; i <= end; i = i + step)
    {

        cout << "mosavi ast ba" << "  " << " = " << "  " << i << endl;
    }
    cout << "                              " << endl;
    int i = start;
    while (i <= end)
    {
        cout << "mosavi ast ba" << "  " << " =   " << i << endl;
        i = i + step;
    }
}

// =====================================================
// Exercise 7: Reverse Range (Count Down)
// =====================================================
// TOZIH:"
// Adad ro az 'start' be sorate makus (baraks) ta 'stop' chap kon.
// Az halgheye kam-shonde (i-- ya i -= 1) estefade kon.
//
// Misal: ReverseRange(10, 6);
// Khoroji:
// 10 9 8 7 6
void ReverseRange(int start, int stop)
{
    for (int i = start; i >= stop; i--)
    {
        cout << "  " << i << "  ";
    }
    cout << "khorooji shoma";
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
    int sum = 0;
    for (int i = 1; i <= limit; i = i + 2)
    {
        cout << "  " << i;
        sum = sum + i;
    }
    cout << endl
         << sum << " <--- khoroojie shoma";
}
// =====================================================
// Exercise 9: POOYA Multiplication Table
// =====================================================
// TOZIH:
// Jadval zarb e adade 'number' ro ta 'limit' chap kon (na faghat ta 10).
//
// Mesal: CustomMultiplicationTable(3, 4);
// Khoroji:
// 3 * 1 = 3
// 3 * 2 = 6
// 3 * 3 = 9
// 3 * 4 = 12
void CustomMultiplicationTable(int number, int limit)
{
    cout << "  adade shoma barabarand ba" << "  " << " = " << "  " << endl;
    for (int i = 1; i <= limit; i++)
    {
        cout << "  " << number * i << endl;
    }
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
    int number = 2;
    int power = 1;
    for (int i = 1; i <= maxPower; i++)
    {
        power = power * number;
        cout << number << "^" << i << " = " << power << endl;
    }
    cout << "adade shoma inha hstand:";

    for (int i = 0; i <= maxPower; i++)
    {
        power = 1;
        for (int j = 0; j < i; j++)
        {
            power *= number;
        }
        cout << number << "^" << i << " = " << power << endl;
    }
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
    for (int i = -1; i < height; i++)
    {
        for (int j = -2; j < i; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
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
    for (int i = height; i > 0; i = i - 1)
    {
        for(int k = height - i;k > 0;k--) {
             cout << " ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
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
       for (int i = 0; i < height; i++) 
    {
        for( int k = height - i;k > 0;k--) { 
            cout << " ";
        }
        
        for (int j = -1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// =====================================================
// Test Runner (Dast be in bakhsh nazan)
// =====================================================
int main()
{
    // cout << "=== Ex 1: Print Evens ===" << endl;
    // PrintEvens(6);
    // cout << endl;

    // cout << "=== Ex 2: Sum Evens ===" << endl;
    // int tt = 10;
    // SumEvens(tt);
    // // SumEvenswhile(tt);
    // cout << endl;

    //  cout << "=== Ex 3: Factorial ===" << endl;
    // CalculateFactorial(10);
    // cout << endl;

    // cout << "=== Ex 4: Repeat Symbol ===" << endl;
    // Repeatheshmat(" AMIRREZA KHLAJI ", 2);
    // cout << endl;

    // cout << "=== 'Ex' 5: Table of Squares ===" << endl;
    // PrintSquares(5);
    // cout << endl;

    // cout << "=== Ex 6: Count With Step ===" << endl;
    // CountWithStep(4, 100, 21);
    // cout << endl;

    // cout << "=== Ex 7: Reverse Range ===" << endl;
    // ReverseRange(10, 6);
    // cout << endl;

    // cout << "=== Ex 8: Sum Odds ===" << endl;
    // SumOdds(7);
    // cout << endl;

    // cout << "=== Ex 9: Custom Multiplication Table ===" << endl;
    // CustomMultiplicationTable(2, 20);
    // cout << endl;

    // cout << "=== Ex 10: Powers of Two ===" << endl;
    // PrintPowersOfTwo(5);
    // cout << endl;

    // cout << "=== Ex 11: Star Triangle Up ===" << endl;
    // DrawTriangleUp(4);
    // cout << endl;

    cout << "=== Ex 12: Star Triangle Down ===" << endl;
    DrawTriangleDown(4);
    cout << endl;

    // cout << "=== Ex 13: Star Triangle Right-Aligned ===" << endl;
    // DrawTriangleRightAligned(4);
    // cout << endl;

    return 0;
}