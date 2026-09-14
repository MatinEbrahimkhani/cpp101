// =====================================================
// Tamrin 305: Loops ba Hasan (while + for)
// =====================================================
// Hadaf: fargh-e while va for ro ba cheshm bebini.
// Har function yek nokte-ye darsi dare — har bar natije ro bekhoon:
//
//   Salam_be_Hasan : while va for yek kar ro do model anjam midan.
//   Countdown      : shomaresh-e makoos (Countdown 3 -> 3 2 1 ... Boom!).
//   PrintNumbers   : chap az start ta end.
//   TimesTable     : jadval-e zarb-e yek adad (Ghadimi: MultiplicationTable).
//   SumNumbers     : jam-e 1 ta n (accumulator).
//
// RAHNAMA: yeki-yeki az comment dar biar va ejra kon.
// Emza-ha (signatures) avaz nashode — faghat tozih ezafe shod.
// =====================================================

#include <iostream>

void Salam_be_Hasan(int shomare_salam)
{
    int i = 0;
    while (i < shomare_salam)
    {
        std::cout << "Salam Hasan " << i << std::endl;
        i++;
    }

    std::cout << "--------------------" << std::endl;

    for (int k = 0; k < shomare_salam; k++)
    {
        std::cout << "Salam Hasan " << k << std::endl;
    }
}

// Countdown: az number ta 1 chap kon, bad "Boom!".
void Countdown(int number)
{
    while (number > 0)
    {
        std::cout << number << std::endl;
        number--;
    }
    std::cout << "Boom!" << std::endl;
}

// PrintNumbers: adad az start ta end chap kon.
void PrintNumbers(int start, int end)
{
    for (int i = start; i <= end; i = i + 1)
    {
        std::cout << i << std::endl;
    }
}

// TimesTable: jadval-e zarb-e number ta 10 (daghigh! na morabba).
void TimesTable(int number)
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }
}

// Esm-e ghadimi — negah dashte shode ta code-e ghabli nashkane.
void MultiplicationTable(int number)
{
    TimesTable(number);
}

// SumNumbers: jam-e 1 ta number.
void SumNumbers(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    std::cout << "Sum = " << sum << std::endl;
}

int main()
{
    // Yeki-yeki az comment dar biar:
    // Salam_be_Hasan(5);
    // Countdown(3);
    // PrintNumbers(1, 5);
    // TimesTable(5);
    SumNumbers(7);

    return 0;
}
