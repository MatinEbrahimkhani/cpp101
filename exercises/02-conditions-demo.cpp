// ============================================================
// Demo 02: Conditions — namayesh-e amalgar-ha (operators)
// ============================================================
// In file yek DEMO ast (na tamrin-e natamam): mostaghim build
// va run mishe. Har bakhsh yek no amalgar ro neshan mide:
//
//   - Relational: ==  !=  <  <=  >  >=
//   - Logical:    && (va)  || (ya)  ! (na)
//   - Arithmetic in conditions: %  +  *
//
// Rahnamay-e Finglish:
//   if yani "agar". && yani "va". || yani "ya". ! yani "na".
//   == yani "aya mosavi ast?" — ba = (assignment) fargh dare!
//
// Hadaf: ghabl az hal-e tamrin-haye 201/202/301/...,
// in mesal-ha ro run kon va output ro ba code moghayese kon.
// ============================================================

#include <iostream>

void relationalDemo() {
    std::cout << "\n--- Relational operators ---" << std::endl;
    int x = 10, y = 15;
    std::cout << "x=10, y=15" << std::endl;
    if (x < y) std::cout << "x < y: dorost" << std::endl;
    if (x <= y) std::cout << "x <= y: dorost" << std::endl;
    if (x == y) std::cout << "x == y" << std::endl;
    else std::cout << "x == y: ghalat (mosavi nistand)" << std::endl;
    if (x != y) std::cout << "x != y: dorost (motafavet-and)" << std::endl;
}

void logicalDemo() {
    std::cout << "\n--- Logical operators ---" << std::endl;
    bool hasID = true, isMember = false, hasPermission = true;
    if (hasID && hasPermission) std::cout << "ID + permission -> access granted" << std::endl;
    if (hasID || isMember) std::cout << "ID ya membership -> allowed" << std::endl;
    if (!isMember) std::cout << "!isMember -> guest user" << std::endl;
}

void arithmeticDemo() {
    std::cout << "\n--- Arithmetic inside conditions ---" << std::endl;
    int num = 14, number = 10;
    if (num % 2 == 0) std::cout << "14 zoj ast (even)" << std::endl;
    if (number + 5 < 20) std::cout << "10 + 5 < 20: dorost" << std::endl;
    if (number * 2 > 15) std::cout << "10 * 2 > 15: dorost" << std::endl;
}

int main() {
    int age = 15;
    if (age >= 18) std::cout << "Adult" << std::endl;
    else std::cout << "age=15 -> not adult (zir-e 18)" << std::endl;

    relationalDemo();
    logicalDemo();
    arithmeticDemo();

    int temperature = 28;
    bool isRaining = true;
    if (temperature > 30 || isRaining) {
        std::cout << "\nWeather: bad or hot (garm ya barani)" << std::endl;
    } else {
        std::cout << "\nWeather: comfortable" << std::endl;
    }
    return 0;
}
