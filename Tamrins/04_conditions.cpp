#include <iostream>
using namespace std;

int some_function() {
    // Relational operators
    int age = 15;
    int score = 70;
    int x = 10;
    int y = 15;

    if (age >= 18) {
        cout << "You are an adult.\n";
    }

    if (score > 80) {
        cout << "Excellent score.\n";
    } else {
        cout << "Score is not excellent.\n";
    }

    if (x < y) {
        cout << "x is less than y.\n";
    }

    if (x <= y) {
        cout << "x is less than or equal to y.\n";
    }

    if (x > y) {
        cout << "x is greater than y.\n";
    } else if (x >= y) {
        cout << "x is greater than or equal to y.\n";
    } else {
        cout << "x is not greater than y.\n";
    }

    if (x == y) {
        cout << "x and y are equal.\n";
    } else {
        cout << "x and y are not equal.\n";
    }

    if (x != y) {
        cout << "x and y are different.\n";
    }

    // Logical operators
    bool hasID = true;
    bool isMember = false;
    bool hasPermission = true;

    if (hasID && hasPermission) {
        cout << "Access granted with ID and permission.\n";
    }

    if (hasID || isMember) {
        cout << "User is allowed through one of the conditions.\n";
    }

    if (!isMember) {
        cout << "Guest user detected.\n";
    }

    // Arithmetic uses inside conditions
    int num = 14;
    int number = 10;

    if ((num % 2) == 0) {
        cout << "num is even.\n";
    }

    if ((number + 5) < 20) {
        cout << "number + 5 is less than 20.\n";
    }

    if ((number * 2) > 15) {
        cout << "number * 2 is greater than 15.\n";
    }

    // Bitwise operator use in conditions
    int a = 12; // 1100
    int b = 10; // 1010

    if ((a & b) != 0) {
        cout << "a and b have common set bits.\n";
    }

    if ((a | b) != 0) {
        cout << "a or b has at least one set bit.\n";
    }

    if ((a ^ b) != 0) {
        cout << "a and b differ in bits.\n";
    }

    if ((a << 1) > 20) {
        cout << "a shifted left is greater than 20.\n";
    }

    if ((b >> 1) < 10) {
        cout << "b shifted right is less than 10.\n";
    }

    // A complete mixed-condition example
    int temperature = 28;
    bool isRaining = true;

    if (temperature > 30 || isRaining) {
        cout << "Weather is bad or hot.\n";
    } else {
        cout << "Weather is comfortable.\n";
    }

    return 0;
}
int main() {
    int temperature = 28;
    bool isRaining = true;

    if (temperature > 30 || isRaining) {
        cout << "Weather is bad or hot.\n";
    } else {
        cout << "Weather is comfortable.\n";
    }



 return 0;
}
