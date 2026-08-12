// ============================================================
// Lesson 09: Structs
// ============================================================
// A struct groups several related variables into ONE custom type.
// Instead of separate name/age variables floating around, you get
// one Person that carries both together - much closer to how we
// think about real things.
// ============================================================

#include <iostream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

int main() {
    // --- Example 1: a single struct ---
    Person p = {"Alice", 30};
    std::cout << p.name << " is " << p.age << " years old." << std::endl;

    // --- Example 2: a vector of structs - a whole class roster! ---
    std::vector<Person> classroom;
    classroom.push_back({"Amirreza", 15});
    classroom.push_back({"Sadra", 15});
    classroom.push_back({"Mina", 16});

    std::cout << "\nClassroom roster:" << std::endl;
    for (const Person& student : classroom) {
        std::cout << "- " << student.name << " (" << student.age << ")" << std::endl;
    }

    // --- Example 3: finding the oldest person ---
    Person oldest = classroom[0];
    for (const Person& student : classroom) {
        if (student.age > oldest.age) {
            oldest = student;
        }
    }
    std::cout << "\nOldest student: " << oldest.name << std::endl;

    return 0;
}

// ============================================================
// EXERCISES
// ============================================================
// 1. Add a `double grade;` field to Person, give everyone a
//    grade, and print the class average.
// 2. Write a struct `Point { double x, y; };` and a function
//    `double distance(Point a, Point b)` using the distance formula
//    (hint: you'll need sqrt from <cmath>).
// 3. Add 3 more students to the classroom and print the YOUNGEST.
// 4. Challenge: write a struct `Book { std::string title,
//    author; int year; };`, make a vector of 5 books, and print
//    only the ones published after 2000.
// ============================================================
