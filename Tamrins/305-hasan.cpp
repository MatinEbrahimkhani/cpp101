#include <iostream>
using namespace std;


// =====================================================
// Function 1: Say Hello to Hasan
// =====================================================

void Salam_be_Hasan(int shomare_salam)
{
    int i = 0;

    while (i < shomare_salam)
    {
        cout << "Salam Hasan " << i << endl;
        i++;
    }

    cout << "--------------------" << endl;

    for (int i = 0; i < shomare_salam; i++)
    {
        cout << "Salam Hasan " << i << endl;
    }
}


// =====================================================
// Function 2: Countdown
// =====================================================

void Countdown(int number)
{
    while (number > 0)
    {
        cout << number << endl;
        number--;
    }

     cout << "dzzzzzzzzzzz" << endl;
}


// =====================================================
// Function 3: Print Numbers
// =====================================================

void PrintNumbers(int start, int end)
{
    for (int i = start; i <= end; i = i + 1)
    {
        cout << i << endl;
    } cout << "dzzzzzzzzzzz" <<endl;
}


// =====================================================
// Function 4: Multiplication Table
// =====================================================

void MultiplicationTable(int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << i << " * " << i << " = " << i * i << endl;
    }
}


// =====================================================
// Function 5: Sum Numbers
// =====================================================

void SumNumbers(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl;
}


// =====================================================
// Main
// =====================================================

int main()
{
    //Salam_be_Hasan(5);

    //cout << endl;

    // Countdown(-7);

    //cout << endl;

    // PrintNumbers(1 , 2);

    //cout << endl;

    // MultiplicationTable(10);

   // cout << endl;

    SumNumbers(7);

    return 0;
}